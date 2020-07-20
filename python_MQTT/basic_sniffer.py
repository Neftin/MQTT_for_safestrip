#!/Users/giammarco/opt/anaconda3/bin/python

# numpy and matplotlib
import numpy as np
import matplotlib
import matplotlib.pyplot    as plt
import matplotlib.animation as manim
from matplotlib.collections import PatchCollection
import SafeStrip_Python_mqtt as spm
from matplotlib import animation

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

# CALLBACK
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
        print('[o]')
        print(content)


client = mqtt.Client()

client.on_connect = on_connect
client.on_message = on_message_yy

client.tls_set("ca.crt", tls_version=ssl.PROTOCOL_TLSv1_2)
client.tls_insecure_set(True)
client.username_pw_set(user, pwd)
client.connect(ip, port, 60)

try:
    print(" [*] Start waiting loop.")
    client.loop_forever()

except KeyboardInterrupt:
    client.disconnect()
    print(" [*] Disconnected.\n")
    client.loop_stop()
    print("\n\n [*] Waiting loop stopped.")
