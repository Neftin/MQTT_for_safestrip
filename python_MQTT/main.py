#!/Users/giammarco/opt/anaconda3/bin/python

# numpy and matplotlib
import numpy as np
import matplotlib
import matplotlib.pyplot    as plt
import matplotlib.animation as manim
from matplotlib.collections import PatchCollection
import SafeStrip_Python_mqtt as spm

# others
import time
import ssl
import datetime
import os
import binascii
import sys
import socket
import paho.mqtt.client as mqtt
import yaml
import platform
import struct
import math

# parameters
number_of_maximum_patches = 3000
max_east = 300
min_east = -300
min_north = -300
max_north = 300
veh_w   = 2
veh_h   = 4
lat_ref   = 0
lon_ref   = 0
first_ref = True
expire_coeff   = 0.1
magnify_stipcam = 5
new_message = 0

# decoding keys
dk_HMI  = '!QIIBdddiB'
dk_CAM  = '!QIIHBiiiiiiHHHBhhBhhHB'
dk_SCAM = '!QIIIBiiiiiiHHHBiB'
dk_DENM = '!QIIHQiiiiiiBBiBiiHHiI' # last two values, related to augmented positioning and the lane are not present in the logs...

ParkingStatus_DK = '!QiIIIIIIIIIII'

# Credential and connection parameters:
ip    = '93.62.253.212'
port  = 8883
user  = 'safestrip'
pwd   = 'S@f3str1p'
topic = 'SafeStrip/#'

# Useful functions for gps convertionm:
# https://gist.github.com/sbarratt/a72bede917b482826192bf34f9ff5d0b

def geodetic_to_ecef(lat, lon, h):

    a = 6378137
    b = 6356752.3142
    f = (a - b) / a
    e_sq = f * (2-f)
    # (lat, lon) in WSG-84 degrees
    # h in meters
    lamb = math.radians(lat)
    phi = math.radians(lon)
    s = math.sin(lamb)
    N = a / math.sqrt(1 - e_sq * s * s)

    sin_lambda = math.sin(lamb)
    cos_lambda = math.cos(lamb)
    sin_phi = math.sin(phi)
    cos_phi = math.cos(phi)

    x = (h + N) * cos_lambda * cos_phi
    y = (h + N) * cos_lambda * sin_phi
    z = (h + (1 - e_sq) * N) * sin_lambda

    return x, y, z

def ecef_to_enu(x, y, z, lat0, lon0, h0):
    a = 6378137
    b = 6356752.3142
    f = (a - b) / a
    e_sq = f * (2-f)
    lamb = math.radians(lat0)
    phi = math.radians(lon0)
    s = math.sin(lamb)
    N = a / math.sqrt(1 - e_sq * s * s)

    sin_lambda = math.sin(lamb)
    cos_lambda = math.cos(lamb)
    sin_phi = math.sin(phi)
    cos_phi = math.cos(phi)

    x0 = (h0 + N) * cos_lambda * cos_phi
    y0 = (h0 + N) * cos_lambda * sin_phi
    z0 = (h0 + (1 - e_sq) * N) * sin_lambda

    xd = x - x0
    yd = y - y0
    zd = z - z0

    xEast = -sin_phi * xd + cos_phi * yd
    yNorth = -cos_phi * sin_lambda * xd - sin_lambda * sin_phi * yd + cos_lambda * zd
    zUp = cos_lambda * cos_phi * xd + cos_lambda * sin_phi * yd + sin_lambda * zd

    return xEast, yNorth, zUp

def geodetic_to_enu(lat, lon, h, lat_ref, lon_ref, h_ref):
    x, y, z = geodetic_to_ecef(lat, lon, h)
    
    return ecef_to_enu(x, y, z, lat_ref, lon_ref, h_ref)

# END GPS utilities

print('Setup: \n ip:   ' + ip + '\n port: ' + str(port) )

# The callback for when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    print(" [*] Try to connect... ")
    if rc == 0:
        print(" [*] Connected accepted.\n")
    elif rc== 1:
        print(" [*] Connection refused, unacceptable protocol version.\n")
    elif rc== 2:
        print(" [*] Connection refused, identifier rejected.\n")
    elif rc== 3:
        print(" [*] Connection refused, server unavailable.\n")
    elif rc== 4:
        print(" [*] Connection refused, wrong username or password.\n")
    elif rc== 5:
        print(" [*] Connection refused, not authorized.\n")      
    client.subscribe("SafeStrip/#")

# patches list objects and preallocation
property_list = [] # store evolving properties and ID 
patches_list  = [] # store all patches

for i in range(0,number_of_maximum_patches-1):
    rect = plt.Rectangle( [ 0,0 ] , 0 , 0 , angle=0, facecolor=[0,0,0,0]) # new empty red patch
    patches_list.append( rect )



# The callback for when a PUBLISH message is received from the broker.
def on_message_yy(client, userdata, msg):
    global new_message
    global property_list
    global patches_list

    new_message = 1

    # reset for new logs
    if ( msg.topic == "SafeStrip/LOG/" ) or ( msg.topic == "SafeStrip/LOG" ):
        if platform.system() == 'Darwin': # check if on mac
            pay = str(msg.payload)[2:-1]
        else:
            pay = str(msg.payload)
        pay = pay.replace('.','-') # remove dots from the attributes
        list_attr = pay.split(",") # list of attributes of the experiments
        command   = int(list_attr[0])
        if command == 1:
            property_list = []
            for obj in patches_list:
                obj.set_height( 0 )
                obj.set_width( 0 ) 
                obj.set_xy([ 0 , 0 ]) # it's the lower left corner
                obj.set_edgecolor( [ 0.0 ,0.0 ,0.0 ,0.0 ] )
                obj.set_facecolor( [ 0.0 ,0.0 ,0.0 ,0.0 ] )
            print('reset')

    payload = bytearray(msg.payload)
    topic   = msg.topic

    # the all MQTT decoding
    content = spm.all_MQTT_decoding( topic , payload )

    if '_message_type_' in content.keys():
        property_list.append(content)
    else:
        print('message is not saved')
    if not 'CAM_' in content['_message_type_']: # exclude cam from the phoine for now
            if 'HMI' in content['_message_type_']:
                if int(content['StationID']) == 401 and content['OutputID'] == 2:
                    print(content)
            else:
                if not 'Parking' in content['_message_type_']:
                    print(content)


client = mqtt.Client()

client.on_connect = on_connect
client.on_message = on_message_yy

client.tls_set("ca.crt", tls_version=ssl.PROTOCOL_TLSv1_2)
client.tls_insecure_set(True)
client.username_pw_set(user, pwd)
client.connect(ip, port, 60)

# update patchlist
def update_patch_list( property_list ):
    global patches_list
    global lat_ref
    global lon_ref
    global first_ref
    k = 0
    for p in reversed(property_list): # use reversed for FIFO input
        if k<number_of_maximum_patches:
            if 'Strip_' in p['_message_type_']: # StripCAM case
                xEast , yNorth , zUp = geodetic_to_enu(p['Latitude']/10000000,p['Longitude']/10000000,0.0,lat_ref,lon_ref,0.0)
                h = max(veh_w*magnify_stipcam*(p['Speed']/(10*100)),2)  # scale with velocity to see
                w = max(veh_h*magnify_stipcam*(p['Speed']/(10*100)),2) # reversed because the rectangle is 0 angle when horizontal
                patches_list[k].set_height( h )
                patches_list[k].set_width( w ) 
                patches_list[k].set_xy([ xEast , yNorth ]) # it's the lower left corner
                patches_list[k].set_edgecolor( [ 0.6 ,0.1 ,0.2 ,1.0 ] )
                patches_list[k].set_facecolor( [ 0.0 ,0.0 ,0.0 ,0.0 ] )
                patches_list[k].angle = p['Heading']/10 + 90
                # ax.text( xEast, yNorth, 'boxed italics text in data coords', style='italic',
                #     bbox={'facecolor': 'black', 'alpha': 0.5, 'pad': 10})
            elif 'CAM_' in p['_message_type_']:
                if first_ref: # first CAM the reference is given
                    lat_ref   = 41.4231056 # TODO put that they can be set or that they are dinamic
                    lon_ref   = -4.6932778 
                    first_ref = False
                xEast , yNorth , zUp = geodetic_to_enu(p['v2x_cam_Latitude']/10000000,p['v2x_cam_Longitude']/10000000,0.0,lat_ref,lon_ref,0.0)
                h = max(veh_w*magnify_stipcam*(p['v2x_cam_Speed']/(10*100)),2) # scale with velocity to see
                w = max(veh_h*magnify_stipcam*(p['v2x_cam_Speed']/(10*100)),2) # reversed because the 
                patches_list[k].set_xy([ xEast , yNorth ])
                patches_list[k].set_height( h )
                patches_list[k].set_width( h ) # reversed because the rectangle is 0 angle when horizontal
                patches_list[k].set_edgecolor( [ 0.0 ,0.0 ,0.0 ,1.0 ] )
                patches_list[k].set_facecolor( [ 0.0 ,0.0 ,0.0 ,0.0 ] )
                patches_list[k].angle = p['v2x_cam_Heading']/10 + 90
            elif 'DENM_' in p['_message_type_']:
                xEast , yNorth , zUp = geodetic_to_enu(p['v2x_denm_eventPosition_latitude']/10000000,p['v2x_denm_eventPosition_longitude']/10000000,0.0,lat_ref,lon_ref,0.0)
                patches_list[k].set_xy([ xEast , yNorth ])
                patches_list[k].set_height( veh_h*2 )
                patches_list[k].set_width( veh_h*2 ) 
                patches_list[k].set_facecolor( [ 0.0 ,0.0 ,0.0 ,0.0 ] )
                patches_list[k].set_edgecolor( [ 0.0 ,0.6 ,1.0 ,1.0 ] )
                patches_list[k].angle = 45
            k=k+1
        else:
            print('number of object cut to ' + str(number_of_maximum_patches) + ' \n')
            k = k+1
            break
            






# FIGURE
fig = plt.figure()
plt.axis('equal')
plt.grid()
ax = fig.add_subplot(111)
ax.autoscale()
ax.axis('equal')
ax.set_xlim(min_east,max_east)
ax.set_ylim(min_north,max_north)


try:
    print(" [*] Start waiting loop.")
    client.loop_start()

except KeyboardInterrupt:
    client.disconnect()
    print(" [*] Disconnected.\n")
    client.loop_stop()
    print("\n\n [*] Waiting loop stopped.")

# add all the patches
for obj in patches_list:
    ax.add_patch(obj)
ax.autoscale_view(True)

# array to store the graphical propeties
colors        = np.zeros( [ number_of_maximum_patches , 4 ] )
coordinate_xy = np.zeros( [ number_of_maximum_patches , 2 ] )
angle         = np.zeros( [ number_of_maximum_patches , 1 ] )
width         = np.zeros( [ number_of_maximum_patches , 1 ] )
height        = np.zeros( [ number_of_maximum_patches , 1 ] )

plt.ion()

i = 0
continua = 1

while continua:    
    time.sleep(0.010)
    if new_message:
        try:         
            update_patch_list( property_list )
            plt.draw()
            plt.pause(0.1)
        except KeyboardInterrupt:
            print('forced stop')
            continua = 0
        new_message = 0

# TODO
# ORA ogni patch deveessere aggiornata in base al messaggio, con il giusto colore e posizione.
# Gestisci anche l'overflow riempiendo le matrici delle proprietà in modo FIFO




