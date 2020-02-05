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

# Credential and connection parameters:
ip    = '93.62.253.212'
port  = 8883
user  = 'safestrip'
pwd   = 'S@f3str1p'
topic = 'SafeStrip/#'

print('Connection setup: \n ip:   ' + ip + '\n port: ' + str(port) )

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


client = mqtt.Client()

client.on_connect = on_connect

client.tls_set("ca.crt", tls_version=ssl.PROTOCOL_TLSv1_2)
client.tls_insecure_set(True)
client.username_pw_set(user, pwd)
client.connect(ip, port, 60)

try:
    print(" [*] Start sending loop.")
    while True:
        pl = input("New experiment ID:")
        client.publish("SafeStrip/set_ID_log", pl)
except KeyboardInterrupt:
    client.disconnect()
    print(" [*] Disconnected.\n")
    print("\n\n [*] Sending loop stopped.")