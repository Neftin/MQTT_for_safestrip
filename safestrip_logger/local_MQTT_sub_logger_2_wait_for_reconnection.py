#!/usr/bin/env python3

import paho.mqtt.client as mqtt
import time
import ssl
import datetime
import os
import yaml
import binascii

# Credential and connection parameters:
ip    = '127.0.0.1'
port  = 1883

ID_experiment = 0;

# The callback for when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    print(" [*] Try to connect... ")
    if rc == 0:
        client.connected_flag==True # set flag
        print(" [*] Connected accepted.\n")
        client.subscribe("SafeStrip/#")
        today_day    = str(datetime.date.today())
        today_folder_y = "/g5/codriver/log_yaml/" + today_day
    # if not os.path.exists(today_folder):
    #     os.makedirs(today_folder)
    #     print('folder for ' + today_day + ' created')
        if not os.path.exists(today_folder_y):
            os.makedirs(today_folder_y)
            print('folder YAML for ' + today_day + ' created')
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
    else:
        print("Bad conncection Returned code=",rc)
        client.bad_connection_flag==True        



# The callback for when a PUBLISH message is received from the broker.
def on_message_yy(client, userdata, msg):
    if msg.topic == "SafeStrip/set_ID_log":
        ID_experiment = int(msg.payload) # update ID
        print( "ID changed: new file created for ID:" + str(ID_experiment) )
    print("message logged")
    today_day = str(datetime.date.today()) # get today date
    file_name = "/g5/codriver/log_yaml/" + str(today_day) + "/" + str(today_day) + "_log_ID_" + str(ID_experiment) + ".yaml" # filename
    print(file_name);
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

def on_disconnect(client,userdata,flags,rc=0):
    print("Disconnected flags"+"result code"+str(rc)+"client_id")
    client.connected_flag==False
    if rc!= 0:
        print("Unexpected MQTT disconnection. Attempting to reconnect.")
        client.reconnect()
# main

mqtt.Client.connected_flag=False # create a flag in  class
mqtt.Client.bad_connection_flag=False # create a flag in  class for bad conncetions
print('Creating new client')
client2=mqtt.Client("loggerP2") #create new instance

client2.on_message    = on_message_yy #attach function to callback
client2.on_connect    = on_connect 
client2.on_disconnect = on_disconnect

print('Connecting to broker')
client2.connect(ip, port)

# client.on_connect = on_connect
# client.on_message = on_message_yy

while not client2.connected_flag and not client2.bad_connection_flag: #wait in loop
    print("In wait loop")
    time.sleep(1)
    break 
    if client2.bad_connection_flag:
        print("Try to connect again")
        client2.reconnect(ip, port)  

#client2.connect(ip, port, 60)
try:
    print(" [*] Start waiting loop.")
    client2.loop_forever()


except KeyboardInterrupt:
    client2.disconnect()
    print(" [*] Disconnected.\n")
    client2.loop_stop()
    print("\n\n [*] Waiting loop stopped.")