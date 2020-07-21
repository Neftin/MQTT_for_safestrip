#!/usr/bin/env python3

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

# Credential and connection parameters:
ip    = '93.62.253.212'
port  = 8883
user  = 'safestrip'
pwd   = 'S@f3str1p'
topic = 'SafeStrip/#'

exp_id = '' # additional string for the file
is_logging = 0
file_name = ''

today_day = ""
today_folder_y = ""

print('Setup: \n ip:   ' + ip + '\n port: ' + str(port) )

# The callback for when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    print(" [*] Try to connect... ")
    global today_day
    global today_folder_y
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

    # create folder
    if not os.path.exists(today_folder_y):
        os.makedirs(today_folder_y)
        print('folder YAML for ' + today_day + ' created')


# The callback for when a PUBLISH message is received from the broker.
def on_message_yy(client, userdata, msg):
    global exp_id
    global is_logging
    global file_name
    global today_day
    global today_folder_y
    # Create folder if needed
    today_day    = str(datetime.date.today())
    today_folder_y = "log_yaml/" + today_day
    # create folder
    if not os.path.exists(today_folder_y):
        os.makedirs(today_folder_y)
        print('folder YAML for ' + today_day + ' created')
    if ( msg.topic == "SafeStrip/LOG/" ) or ( msg.topic == "SafeStrip/LOG" ):
        pay = msg.payload.decode("utf-8")
        pay = pay.replace('.','-') # remove dots from the attributes
        list_attr = pay.split(",") # list of attributes of the experiments
        command   = int(list_attr[0])
        if is_logging == 1:
            if command == 0:
                is_logging = 0 # stop logging mechanism
                print('Stop logging')
        if is_logging == 0:
            if command == 1:
                is_logging = 1 # start logging mechanism ( new file )
                today_day = str(datetime.date.today()) # get today date
                nownow    = datetime.datetime.now()
                file_name = "log_yaml/" + str(today_day) + "/" + str(today_day)  + nownow.strftime("_%H-%M-%S_") + '_'.join(list_attr[1:]) + ".yaml" # filename
                print('New log with filename: ' + file_name + ' created')
        else:
            if command == 1:
                is_logging = 1 # start logging mechanism ( new file )
                today_day = str(datetime.date.today()) # get today date
                print('Changed filename from: ' + file_name + ' to')
                file_name = "log_yaml/" + str(today_day) + "/" + str(today_day)  + nownow.strftime("_%H-%M-%S_") + '_'.join(list_attr[1:]) + ".yaml" # filename
                print( file_name + ' (created new file)' )
    else:
        if is_logging:
            f = open(file_name,"a")     # append mode (or create file)
            a = bytearray(msg.payload)  # use bytearray object for payload
            b = binascii.hexlify(a)     # convert to hexadecimal
            b_utf   = b.decode("utf-8")
            epoch   = datetime.datetime.utcfromtimestamp(0) # 1970-1-1
            dt      = datetime.datetime.utcnow()            # utc now
            utcobj  = int(round((dt - epoch).total_seconds() * 1000.0)) # milliseconds precision (UTC)
            # Assemble object to log for the yaml file
            Obj_to_log = { 'MSG_' + str(utcobj) : {'payload' : str(b_utf), 'topic' : str(msg.topic) , 'time_stamp_local' : str(utcobj) } }

            yaml.dump( Obj_to_log , f , default_flow_style=False ) # write yalm file

            f.close()# close file

            print("message logged on topic: " + msg.topic)
        else:
            print("message NOT logged on topic: " + msg.topic)


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