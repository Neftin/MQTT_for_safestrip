#!/usr/bin/env python3

import time
import ssl
import datetime
import os
import binascii
import sys
import socket
import platform
import paho.mqtt.client as mqtt
import yaml

nownow = datetime.datetime.now();

# Credential and connection parameters:
ip    = '93.62.253.212'
port  = 8883
user  = 'safestrip'
pwd   = 'S@f3str1p'
topic = 'SafeStrip/#'

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


def on_publish(client, userdata, result):
        print("Published")
            

client = mqtt.Client()

client.on_connect = on_connect
client.on_publish = on_publish

client.username_pw_set(username = user, password = pwd)
client.tls_set('./ca.crt',
               tls_version = ssl.PROTOCOL_TLSv1_2)
client.tls_insecure_set(True)

client.connect(ip, port, 60) 


path = 'log_test_stream.yaml' # here the log file to stream

delta_t = 1
t       = 0
t2      = 0



with open(path) as file:
    logs = yaml.full_load(file)

    for item, msg in logs.items():
        print(item, " topic: " , msg['topic'])
        t2 = int(msg['time_stamp_local'])
        if t != 0: # not for the first ( or any 0 wait for one millisecond)
            delta_t = t2-t# calculate time to wait for next message
        time.sleep(delta_t/1000) # pause in millisecond
        print( str(delta_t) + " milliseconds elapsed")
        t = t2
        bitmsg = binascii.unhexlify(msg['payload']) # convert from hexadecimal to binary
        client.publish( msg['topic'] , bitmsg )
