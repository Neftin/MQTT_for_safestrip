#!/usr/bin/env python3

import time
import ssl
import datetime
import os
import binascii
import sys
import socket


if socket.gethostname() == 'GiamMAC.local':
    print('working on GiamMac: manual folder inclusion needed...') 
    sys.path.append('/Library/Frameworks/Python.framework/Versions/3.6/lib/python3.6/site-packages')
    print(sys.path)

import paho.mqtt.client as mqtt
import yaml

# Credential and connection parameters:
if len(sys.argv) == 1:
    ip    = '127.0.0.1'
elif len(sys.argv) == 2:
    ip    = str(sys.argv[1])
else:
    print('too many program arguments')
port  = 1883

exp_id = '0';

print('Local logger setup: \n ip:   ' + ip + '\n port: ' + str(port) )

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
    today_day    = str(datetime.date.today())
    today_folder = "log/" + today_day
    today_folder_y = "log_yaml/" + today_day

    # if not os.path.exists(today_folder):
    #     os.makedirs(today_folder)
    #     print('folder for ' + today_day + ' created')
    if not os.path.exists(today_folder_y):
        os.makedirs(today_folder_y)
        print('folder YAML for ' + today_day + ' created')


# The callback for when a PUBLISH message is received from the broker.
def on_message_yy(client, userdata, msg):
    global exp_id
    if msg.topic == "SafeStrip/set_ID_log":
        exp_id = msg.payload
        # exp_id = exp_id.replace("b'","")
        # exp_id = exp_id.replace("'","")
        
    today_day = str(datetime.date.today()) # get today date
    file_name = "log_yaml/" + str(today_day) + "/" + str(today_day) + "_log_ID_" + str(exp_id) + ".yaml" # filename
    f = open(file_name,"a")     # append mode
    a = bytearray(msg.payload)  # use bytearray object for payload
    b = binascii.hexlify(a)     # convert to hexadecimal
    epoch   = datetime.datetime.utcfromtimestamp(0) # 1970-1-1
    dt      = datetime.datetime.utcnow()            # utc now
    utcobj  = int(round((dt - epoch).total_seconds() * 1000.0)) # milliseconds precision (UTC)
    # Assemble object to log for the yaml file
    Obj_to_log = { 'MSG_' + str(utcobj) : {'payload' : str(b)[2:-1], 'topic' : str(msg.topic) , 'time_stamp_local' : str(utcobj) } }
    yaml.dump( Obj_to_log , f , default_flow_style=False ) # write yalm file
    f.close()# close file
    
    if msg.topic == "SafeStrip/set_ID_log":
        print('new file with ID' + exp_id)

    print("message logged on topic: " + msg.topic)

client = mqtt.Client()

client.on_connect = on_connect
client.on_message = on_message_yy

client.connect(ip, port, 60)
try:
    print(" [*] Start waiting loop.")
    client.loop_forever()
    
     




except KeyboardInterrupt:
    client.disconnect()
    print(" [*] Disconnected.\n")
    client.loop_stop()
    print("\n\n [*] Waiting loop stopped.")