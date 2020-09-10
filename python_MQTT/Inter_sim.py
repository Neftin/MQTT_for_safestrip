#!/Users/giammarco/opt/anaconda3/bin/python

# numpy and matplotlib
import numpy as np
import matplotlib
import matplotlib.pyplot    as plt
import matplotlib.animation as manim
from matplotlib.collections import PatchCollection
import SafeStrip_Python_mqtt as spm
from matplotlib import animation
import pymap3d as pm


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

max_east  = 300
min_east  = -300
min_north = -300
max_north = 300

veh_w        = 2
veh_h        = 4
lat_ref      = 0
lon_ref      = 0
UTC_ref      = 0
UTC_real_ref = 0

first_ref       = True
expire_coeff    = 0.1
magnify_stipcam = 5
new_message     = 0

# # decoding keys
# dk_HMI  = '!QIIBdddiB'
# dk_CAM  = '!QIIHBiiiiiiHHHBhhBhhHB'
# dk_SCAM = '!QIIIBiiiiiiHHHBiB'
# dk_DENM = '!QIIHQiiiiiiBBiBiiHHiI' # last two values, related to augmented positioning and the lane are not present in the logs...

# ParkingStatus_DK = '!QiIIIIIIIIIII'

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

def utc_now():
    millis = round(time.time() * 1000)
    return millis


def dummy_Strip_CAM_writer( lat , lon , heading , speed , rfid_id , lane_id ):
    # write the Strip cam (current UTC)
    dict = {}
    dict['_message_type_']                               = 'Strip_CAM'
    dict['UTC_time']                                     = int(utc_now());
    dict['originationStationID']                         = 1
    dict['StripID']                                      = 1
    dict['RFID_ID']                                      = int(rfid_id)
    dict['StationType']                                  = 5
    dict['Latitude']                                     = int(lat*10000000)
    dict['Longitude']                                    = int(lon*10000000)
    dict['ConfidenceEllipse_semiMajor']                  = 1
    dict['ConfidenceEllipse_semiMinor']                  = 1
    dict['ConfidenceEllipse_semiMajorOrientation']       = 1
    dict['Altitude']                                     = 0 
    dict['Heading']                                      = int(heading*10)
    dict['Speed']                                        = int(speed*100)
    dict['VehicleLength']                                = 40
    dict['VehicleWidth']                                 = 20
    dict['LongitudinalAcceleration']                     = 161
    dict['Lane_ID']                                      = int(lane_id)

    return dict


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ MAIN ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

client = mqtt.Client()

client.on_connect = on_connect

client.tls_set("ca.crt", tls_version=ssl.PROTOCOL_TLSv1_2)
client.tls_insecure_set(True)
client.username_pw_set(user, pwd)
client.connect(ip, port, 60)

print('Setup: \n ip:   ' + ip + '\n port: ' + str(port) )

# PARAMETERS
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# Intersection center
center_lat = 40.5738211
center_lon = 22.9881428

# distances
strip_dist_ego     = [ 100 , 60 , 30  ]
strip_dist_non_ego = [ 100 , 55 , 25  ]
# angles
alpha           = np.deg2rad( 303.16 - 360 )
beta            = np.deg2rad(np.rad2deg(alpha) - 90)
heading_ego     = ( 270 + np.rad2deg(alpha) -180 ) 
heading_non_ego = ( 270 + np.rad2deg(beta)  +180 )  
print(heading_non_ego)
# Positions calculation
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


def assign_map_in_a_vergognous_way():
    # This function does not even deserve a propere orthography
    sample_data = { 'hex_payload' : '000001709ff5862700000005a028304000000000011b76da85069f05ce00000000000000000000000000010203000000000016eba67e0a00000000000000c054f27600d0d276000000000000000000000000ffffffffece6a67e0000000000000000000000000000000000000000000000000006962b7ea6ec740000000000000000000000000000000000000000000000007ea6eb770000000a00000005009f931f0000002076f254c076d2d000000000000000000100000000ffffffff7ea6e754000000000006962800000000000000010006962b7ea6ecd46575727476c40000000aef587ea6e7987ea6e8480000000100076dc0000aef587ea6e798000aef587ea6e848000000007ea6edc80006962b00000064a00000007ea6e84076c77b790000000976d2dc3876f254c07ea6e8480000000000076dc0000000627ea6e8286666666676d0b1cc76c7758876c77588000afcc87ea6e848000000000006962800000000000000000000000000000000000000000000000000000000000000007ea6ec640000000a0000181c009f8eea0000002076f254c076d2d000000000000000000100000000ffffffff7ea6e844000000000006962800000000000000040006962b7ea6edc430302e3142003000696220587972616e2e3830005a39313700001600000001480000000400000016000000040000000800000083000000010000000600001760000017600000000c000000000000000000000004000000000000007e00000001000000000000000080000000aaaaaaab000846e176d2dc387ea6e98876cae01100000089000000010000000676d2baac000000007ea6e988000000000000000000000004000000007ea6e9140000000176f318b476c5718976f2800076f31568000000007ea6ea4b00000000ff000418ffffffff76f280000000002076a4a4280000000076f0f499000000000000000000000004000000010000009d000000010000000076d2dc3876f254c07ea6ea380000000000000000000000000000000000000000000000007ea6e9887ea6ea380000000100076dc0000000640006274700000034000000210000000a000000030000000200000078000000020000003e000000667ea6ea186666666640747a66000000027ea6eff8000af2087ea6ea3800000000000656ed7ea6eaf47ea6eaf5000000007ea6ec787ea6e9fc000aef5800076dc07ea6f2c0000000000000020000084bac009f8f247ea6ea58000000049999999a3fd9999900a0aef000000000007370657600006276ed97c8000000007ea6ea687ea6eb1476edcf3476e91a1d30342e30003534003030363433333a002e32353a5a3030387ea6eb0076e9198d393031380000000000000000000000000000002076edd368000aef580000000476edcf34000af00076d10dd80000000176c9173976d2dcb8000000007ea6eb530000000176c90f857ea6eb1476edb00076c923c1000000010000000176d2dcb87ea6eb5376c91bdd76c91ac176d2dcb800000001000000017ea6eb530000000176f2500076c8a9bdc00800000000000076d2dcb876c89e5b000af0740000000000003002000af078000af07476e99a010000005b000aef587ea6eb5376edcf340000000076edcf01000af07476d2d0000000000176d2d000000af074009f890000001fad00000000009faeb476ce118f000aef58009faefc009faf1476c0dc39009faeb400001090009fae20009faefc009faf1476c0bd2d00000000009fae2000a0c590000aef58009faefc00001fad0000000010624dd37ea6fec876c0be5d00000000906fbf007ea6ec1c000aef5800000000009fae207ea6ec1c76c0a16b7ea6ec1c000000000000000000000000000b11c8000000007ea6ec5c0000003e000000000000906fec887ea68900009fec1c7ea6f2607ea60000000032905e5e00000000d34d6210c8fea67e43f80500c840cb280000000000000000d3f900050005000000007001f59fe88500000200000000001c181b05db76064f009f00e300000000bf00906f0e000011f190000af1b0000a473c000800007ff8ef58000a47380008f208000a473000085a3b0006f2c07ea6f3f00006001900002e110006e1a40006000a000000000000000000000000000000000000000000000000000046f40008000000000000000000000000000000000000000046f8000800030000f940000a0000000000000000000000000303000000000000000000000000000080000000000000000000000000000000004708000300000088fb0a000000000000000000000000000000000000000000000000000000000009000000000000000000000000000000044708000600000001020a000000000000000000000000000000000000000000000000000000f87f000000000000000000000000000000000447080002000000a8f10a000000000000000000000000000000000000000000000000000000f87f0000000000000000' , 'topic' : 'SafeStrip/MAPEM/-1607978944' }
    payload = binascii.unhexlify(sample_data['hex_payload'])
    contentMap = spm.all_MQTT_decoding( sample_data['topic'] , payload )
    # Add the one of interest only
    contentMap['v2x_map_intersection_refLatitude']  = int(center_lat*10000000)
    contentMap['v2x_map_intersection_refLongitude'] = int(center_lon*10000000)
    contentMap['UTC_time']                          = int(utc_now())

    return contentMap


# Publish Map
mapo = assign_map_in_a_vergognous_way()
ppp = spm.MAPEM_message_encode( mapo )
ttt  = spm.MAPEM_message_MQTT_topic( mapo )
client.publish( ttt , ppp )
print('Map Sent')

time.sleep( 10.0/(40.0/3.6) )

for i in range(0,3):

    lat_ego , lon_ego , up          = pm.enu2geodetic( strip_dist_ego[i]*math.cos(alpha)      , strip_dist_ego[i]*math.sin(alpha)      , 1 , center_lat ,center_lon , 1 )
    lat_non_ego , lon_non_ego , up  = pm.enu2geodetic( strip_dist_non_ego[i]*math.cos(beta)   , strip_dist_non_ego[i]*math.sin(beta)   , 1 , center_lat ,center_lon , 1 )
    # print( [lat_ego , lon_ego ])
    # print( [lat_non_ego , lon_non_ego ])

    SC_non_ego = dummy_Strip_CAM_writer( lat_non_ego , lon_non_ego , heading_non_ego ,  40.0/3.6 , 202 , 2 )
    packed_lunch = spm.Strip_CAM_encode( SC_non_ego )
    topic_lunch  = spm.Strip_CAM_MQTT_topic( SC_non_ego )
    client.publish( topic_lunch , packed_lunch )

    print('Non ego')

    time.sleep( 10.0/(40.0/3.6) )

    SC_ego     = dummy_Strip_CAM_writer( lat_ego     , lon_ego     , heading_ego     , 40.0/3.6 , 101, 1 )
    packed_lunch = spm.Strip_CAM_encode( SC_ego )
    topic_lunch  = spm.Strip_CAM_MQTT_topic( SC_ego )
    client.publish( topic_lunch , packed_lunch )

    print('Ego')

    time.sleep( 20.0/(40.0/3.6) )

print('done')