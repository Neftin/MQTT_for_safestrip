#!/usr/bin/env python3

import paho.mqtt.client as mqtt
import time
import ssl

# Credential and connection parameters:
ip    = '10.196.37.61'
port  = 1883
topic = '#'

# The callback for when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    print(" [*] Try to connect...")
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
    client.subscribe(topic)
    
# The callback for when a PUBLISH message is received from the server.
def on_message(client, userdata, msg):
    print(" [x] Topic: %r\n     Message: %r\n" % (msg.topic, str(msg.payload)))

client = mqtt.Client()

client.on_connect = on_connect
client.on_message = on_message

client.connect(ip, port, 60) 
try:
    print(" [*] Start waiting loop.")
    client.loop_forever()
except KeyboardInterrupt:
    client.disconnect()
    print(" [*] Disconnected.\n")
    client.loop_stop()
    print("\n\n [*] Waiting loop stopped.")