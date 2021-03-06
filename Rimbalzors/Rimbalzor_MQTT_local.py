#!/usr/bin/env python3

import paho.mqtt.client as mqtt
import time
import ssl

passed_payload = bytearray(0)
passed_topic   = ""
trigger = 0
topic = 'SafeStrip/#'


# Credential and connection parameters:
ip    = '93.62.253.212'
port  = 8883
user  = 'safestrip'
pwd   = 'S@f3str1p'
topic = 'SafeStrip/#'

# The callback for when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    global topic
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
    global passed_topic 
    global passed_payload 
    global trigger 
    passed_topic   = msg.topic
    passed_payload = bytearray(msg.payload)
    trigger = 1
    print(" received [x] Topic: %r\n     Message: %r\n" % (msg.topic, str(msg.payload)))

client = mqtt.Client()

client.username_pw_set(username = user, password = pwd)
client.tls_set('./ca.crt',
               tls_version = ssl.PROTOCOL_TLSv1_2)
client.tls_insecure_set(True)

client.on_connect = on_connect
client.on_message = on_message

# Credential and connection parameters:
ip_local    = 'localhost'
port_local  = 1883

client_local = mqtt.Client()

# The callback for when the client receives a CONNACK response from the server.
def on_connect_local(client, userdata, flags, rc):
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

def on_publish_local(client, userdata, mid):
    global trigger
    trigger = 0


client_local = mqtt.Client()


client_local.on_connect = on_connect_local
client_local.on_publish = on_publish_local

client.connect(ip, port, 60) 
print("connected remote\n")

client_local.connect(ip_local, port_local, 60) 
print("connected local\n")

client.loop_start()
print("remote listening\n")

try:
    print(" [*] Start Rimbalzor loop (1ms).\n")
    while True:
        if trigger > 0:
            print(passed_topic)
            client_local.publish(passed_topic,passed_payload)
            print("Rimbalzed!\n")
        time.sleep(0.001)
except KeyboardInterrupt:
    client.disconnect()
    print(" [*] Disconnected.\n")
    print("\n\n [*] Sending loop stopped.")