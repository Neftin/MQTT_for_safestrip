# -*- coding: utf-8 -*-
"""
Updated on Tue Dec 17 12:25:36 2019

@author: evich

Updated on Wed Oct 23 14:42:50 2019

Created on Fri Sep 20 11:23:23 2019

SafeStrip DSS for Highway Environment [all 6 applications available ]
4 safety applications and 2 informative of Virtual Toll and 
@author: Dr.Evangelia Chrysochoou/CERTH/HIT
"""
import paho.mqtt.client as mqtt #import the client1
import time
#import random
import datetime
import ssl
import struct
import sys

 #Credential and connection parameters:
ip    = '93.62.253.212'
#ip    = '127.0.0.1'
port  = 8883
user  = 'safestrip'
pwd   = 'S@f3str1p'
topic = 'SafeStrip/#'
# Credential and connection parameters:
#ip    = '93.62.253.212'
#port  = 8883
#user  = 'safestrip'
#pwd   = 'S@f3str1p'
###################
###LOCAL ConnectionCredential and connection parameters:
#ip    = '192.168.9.1'
#ip    = '160.40.60.211'# local SERVER_HIT
#port  = 1883
###################

decoding_key = '!QIIBdddiB' # sequence of the data formats to unpack

########################### Get UTC timestamp ####################################################
epoch   = datetime.datetime.utcfromtimestamp(0) # 1970-1-1
dt      = datetime.datetime.utcnow()            # utc now
utcobj  = int(round((dt - epoch).total_seconds() * 1000.0)) # milliseconds precision (UTC)

########################### Global Variables ####################################################
ApplicationDict={}
ActiveApplicationDict={}
'''
Station_ids=[1,2,3] # Theoritically i should somehow read and know in advance the station ids 

for j in Station_ids:
    Application={}
    for i in [1,2,3,4,7]:
        Application[i]={'UTC_time': int(utcobj),'OutputID':i,'StationID':j,'WarningLevel':0,'J0f': 0,
        'TargetDistancef':0,'TargetSpeedf':0,'TargetClassf':0,'TargetComingDirection':0}
    ApplicationDict[j]= Application 
#print(ApplicationDict)
'''
ActiveApplication = {}

ActiveApplication={
		'UTC_time': 0,
		'OutputID':0,
        'StationID':0,
		'WarningLevel':3,
        'J0f': 0,
        'TargetDistancef':0,
        'TargetSpeedf':0,
        'TargetClassf':0,
        'TargetComingDirection':0	                    
		}
Active_Application_Flag={}
#ParkingBooking=[0 for i in range(len(ApplicationDict))]
#VirtualTolls=[0 for i in range(len(ApplicationDict))]
result = 0	
counter=0
#Station=Station_ids[0]
################################################################################


def on_connect(client,userdata,flags,rc):
    if rc==0:
        client.connected_flag==True # set flag
        print("Connected OK")
        client.subscribe('SafeStrip/HMIinputsByApp/1')
        client.subscribe('SafeStrip/HMIinputsByApp/2')
        client.subscribe('SafeStrip/HMIinputsByApp/3')
        client.subscribe('SafeStrip/HMIinputsByApp/4')
        client.subscribe('SafeStrip/HMIinputsByApp/5')
        client.subscribe('SafeStrip/HMIinputsByApp/6')
        print('Subscribed to topics.\n')
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

################################################################################
def on_log(client,userdata,level,buf):
    print("log:", buf)

def on_disconnect(client,userdata,flags,rc=0):
    print("Disconnected flags"+"result code"+str(rc)+"client_id")
    client.connected_flag==False
    if rc!= 0:
        print("Unexpected MQTT disconnection. Attempting to reconnect.")
        client.reconnect()
   
################################################################################
def on_message(client, userdata, message):
	global ApplicationDict
	global Station
	global decoding_key
	global counter
	global Active_Application_Flag

	topic = str(message.topic)
	print("message topic=",topic)
	try:
  		msg=struct.unpack( decoding_key , message.payload )
	except:
  		print("Error in decoding")
	print("succesful decoding") # REMOVE
	name    = msg[1] #Level = msg_json['WarningLevel']
	Station = msg[2]
	Level   = msg[3]
	while Station not in  ApplicationDict:
	    Application={}
	    for i in range(1,7):
	       Application[i]={'UTC_time': int(utcobj),'OutputID':i,'StationID':Station,'WarningLevel':3,'J0f': 0,
        'TargetDistancef':0,'TargetSpeedf':0,'TargetClassf':0,'TargetComingDirection':0}
	    ApplicationDict[Station]= Application
	    Active_Application_Flag[Station]=0 
	if (msg[1]==ApplicationDict[Station][name]['OutputID'])and (msg[2]==ApplicationDict[Station][name]['StationID'] )and (msg[3]==ApplicationDict[Station][name]['WarningLevel']) and (ApplicationDict[Station][name]['TargetClassf'] == msg[7]):
	    Active_Application_Flag[Station]=1  
	    counter+=1
	    print("Same message from Co- Driver")
	    
	else:
	    ApplicationDict[Station][name]['UTC_time']              = msg[0] 
	    ApplicationDict[Station][name]['OutputID']              = msg[1] 
	    ApplicationDict[Station][name]['StationID']             = msg[2] 
	    ApplicationDict[Station][name]['WarningLevel']          = Level
	    ApplicationDict[Station][name]['J0f']                   = msg[4]
	    ApplicationDict[Station][name]['TargetDistancef']       = msg[5]
	    ApplicationDict[Station][name]['TargetSpeedf']          = msg[6]
	    ApplicationDict[Station][name]['TargetClassf']          = msg[7]
	    ApplicationDict[Station][name]['TargetComingDirection'] = msg[8]
	    print("OutputID",name)
	    print("StationID",Station)
	    print("WarningLevel",Level)
	    print('TargetClassf',msg[7])
	    print(ApplicationDict[Station][name]) # for debug
	    #print(ActiveApplication)
	    ActiveApplicationDict[Station]=Highway_DSS(Station)
	    print(ActiveApplicationDict[Station])
	   # print("message received ", str(message.payload.decode("utf-8")))
	    counter=0
	    Active_Application_Flag[Station]=0
	    if ActiveApplicationDict[Station]['OutputID']!= 0 and Active_Application_Flag[Station]==0:
	       DSS_message = struct.pack(decoding_key,int(ActiveApplicationDict[Station]['UTC_time']),int(ActiveApplicationDict[Station]['OutputID']),int(ActiveApplicationDict[Station]['StationID']),
                            int(ActiveApplicationDict[Station]['WarningLevel']),float(ActiveApplicationDict[Station]['J0f']),float(ActiveApplicationDict[Station]['TargetDistancef']),
                            float(ActiveApplicationDict[Station]['TargetSpeedf']),int(ActiveApplicationDict[Station]['TargetClassf']),int(ActiveApplicationDict[Station]['TargetComingDirection']))
	       new_topic = 'SafeStrip/HMIinputsByApp_active/'+str(ActiveApplicationDict[Station]['StationID'])
	       print('Publishing message {} to topic {}'.format(DSS_message, new_topic))
	       client.publish(new_topic,DSS_message)
            
################################################################################




#########################################################
def Highway_DSS(station):
    global ActiveApplication
    global result
    
    print(123)
    if(ApplicationDict[station][1]['WarningLevel']== 2):
        result=1
    
    elif(ApplicationDict[station][1]['WarningLevel']== 1):
        if(ApplicationDict[station][2]['WarningLevel']== 2):
            result=2   
        elif(ApplicationDict[station][2]['WarningLevel']== 1):
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 1):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
            elif(ApplicationDict[station][3]['WarningLevel']== 0):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
            elif(ApplicationDict[station][3]['WarningLevel']== 10):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
            else:
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
                
        elif(ApplicationDict[station][2]['WarningLevel']== 0): 
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif (ApplicationDict[station][3]['WarningLevel']== 1): 
                result=1
            elif (ApplicationDict[station][3]['WarningLevel']== 0):
                if (ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
            
        elif(ApplicationDict[station][2]['WarningLevel']== 10):
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif (ApplicationDict[station][3]['WarningLevel']== 1): 
                if (ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
            elif (ApplicationDict[station][3]['WarningLevel']== 0):
                if (ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
            else:
                if (ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
        else:
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif (ApplicationDict[station][3]['WarningLevel']== 1): 
                if (ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
            elif (ApplicationDict[station][3]['WarningLevel']== 0):
                if (ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
            else:
                if (ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=1
           
       
    elif(ApplicationDict[station][1]['WarningLevel']== 0):
        if(ApplicationDict[station][2]['WarningLevel']== 2):
            result=2
        elif(ApplicationDict[station][2]['WarningLevel']== 1):
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 1):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=2
            else:
                result=2
        elif(ApplicationDict[station][2]['WarningLevel']== 0):
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 1):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=3
             
            elif(ApplicationDict[station][3]['WarningLevel']== 0):
                if(ApplicationDict[station][4]['WarningLevel']== 2) or(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                else:
                    result=1
            else:
                if(ApplicationDict[station][4]['WarningLevel']== 2) or(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                else:
                    result=1
            
        else:
            if (ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif (ApplicationDict[station][3]['WarningLevel']== 1) :
                if (ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=3
            elif (ApplicationDict[station][3]['WarningLevel']== 0) :
                if (ApplicationDict[station][4]['WarningLevel']== 2)or (ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                else:
                    result=1
                
            else:
                if (ApplicationDict[station][4]['WarningLevel']== 2)or (ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                else:
                    result=1
            print("!")

    elif(ApplicationDict[station][1]['WarningLevel']== 10):
        if(ApplicationDict[station][2]['WarningLevel']== 2):
            result=2      
        elif(ApplicationDict[station][2]['WarningLevel']== 1):
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 1):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                elif(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=3
                else:
                    result=2
            elif(ApplicationDict[station][3]['WarningLevel']== 10):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                elif(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=2
                else:
                    result=2
                    
            else:
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                elif(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=2
                else:
                    result=2
                
        elif(ApplicationDict[station][2]['WarningLevel']== 0):
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 1): 
                if(ApplicationDict[station][4]['WarningLevel']== 2): 
                    result=4
                else:
                    result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 0):
                if(ApplicationDict[station][4]['WarningLevel']== 2)or (ApplicationDict[station][4]['WarningLevel']== 1): 
                    result=4
                else:
                    result=2
            else:
                if(ApplicationDict[station][4]['WarningLevel']== 2) or (ApplicationDict[station][4]['WarningLevel']== 1): 
                    result=4
                else:
                    result=2
        elif(ApplicationDict[station][2]['WarningLevel']== 10):
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 1):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 0): 
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                else:
                    result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 10):
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1)or(ApplicationDict[station][4]['WarningLevel']== 0):
                    result=4
                elif(ApplicationDict[station][4]['WarningLevel']== 10):
                    if(ApplicationDict[station][5]['WarningLevel']== 0)or(ApplicationDict[station][5]['WarningLevel']== 1)or(ApplicationDict[station][5]['WarningLevel']== 10):
                        result=5
                    elif (ApplicationDict[station][6]['WarningLevel']== 0) or (ApplicationDict[station][6]['WarningLevel']== 1) or (ApplicationDict[station][6]['WarningLevel']== 2) or (ApplicationDict[station][6]['WarningLevel']== 10):
                        result=6
                    else:
                        result=1
            else:
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1)or(ApplicationDict[station][4]['WarningLevel']== 0):
                    result=4
                elif(ApplicationDict[station][4]['WarningLevel']== 10):
                    if(ApplicationDict[station][5]['WarningLevel']== 0)or(ApplicationDict[station][5]['WarningLevel']== 1)or(ApplicationDict[station][5]['WarningLevel']== 10):
                        result=5
                    elif (ApplicationDict[station][6]['WarningLevel']== 0) or (ApplicationDict[station][6]['WarningLevel']== 1) or (ApplicationDict[station][6]['WarningLevel']== 2) or (ApplicationDict[station][6]['WarningLevel']== 10):
                        result=6
                    else:
                        result=1
           #### 
        else:
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 1):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 0): 
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                else:
                    result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 10):
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1)or(ApplicationDict[station][4]['WarningLevel']== 0):
                    result=4
                else:
                    result=1
            else:
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1)or(ApplicationDict[station][4]['WarningLevel']== 0):
                    result=4
                else:
                    result=1
            
    else:
        if(ApplicationDict[station][2]['WarningLevel']== 2):
            result=2
        elif(ApplicationDict[station][2]['WarningLevel']== 1):
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3  
            elif(ApplicationDict[station][3]['WarningLevel']== 1):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=2
            elif(ApplicationDict[station][3]['WarningLevel']== 0):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=2
            else:
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=2
                 

        elif(ApplicationDict[station][2]['WarningLevel']== 0):
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 1):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 0):
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                else:
                    result=2
                
            else:
                if(ApplicationDict[station][4]['WarningLevel']== 2)or (ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                else:
                    result=2
                print("!")

        elif(ApplicationDict[station][2]['WarningLevel']== 10):
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3 
            elif(ApplicationDict[station][3]['WarningLevel']== 1):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 0):
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                else:
                    result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 10):
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                elif(ApplicationDict[station][4]['WarningLevel']== 10):
                    if(ApplicationDict[station][5]['WarningLevel']== 0)or(ApplicationDict[station][5]['WarningLevel']== 1)or(ApplicationDict[station][5]['WarningLevel']== 10):
                        result=5
                    elif (ApplicationDict[station][6]['WarningLevel']== 0) or (ApplicationDict[station][6]['WarningLevel']== 1) or (ApplicationDict[station][6]['WarningLevel']== 2) or (ApplicationDict[station][6]['WarningLevel']== 10):
                        result=6
                    else:
                        result=2
            else:
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1)or(ApplicationDict[station][4]['WarningLevel']== 0):
                    result=4
                elif(ApplicationDict[station][4]['WarningLevel']== 10):
                    if(ApplicationDict[station][5]['WarningLevel']== 0)or(ApplicationDict[station][5]['WarningLevel']== 1)or(ApplicationDict[station][5]['WarningLevel']== 10):
                        result=5
                    elif (ApplicationDict[station][6]['WarningLevel']== 0) or (ApplicationDict[station][6]['WarningLevel']== 1) or (ApplicationDict[station][6]['WarningLevel']== 2) or (ApplicationDict[station][6]['WarningLevel']== 10):
                        result=6
                    else:
                        result=2   

        else:
            if(ApplicationDict[station][3]['WarningLevel']== 2):
                result=3 
            elif(ApplicationDict[station][3]['WarningLevel']== 1):
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                else:
                    result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 0):
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4
                else:
                    result=3
            elif(ApplicationDict[station][3]['WarningLevel']== 10):
                if(ApplicationDict[station][4]['WarningLevel']== 2)or(ApplicationDict[station][4]['WarningLevel']== 1)or(ApplicationDict[station][4]['WarningLevel']== 0):
                    result=4
                elif(ApplicationDict[station][4]['WarningLevel']== 10):
                    if(ApplicationDict[station][5]['WarningLevel']== 0)or(ApplicationDict[station][5]['WarningLevel']== 1)or(ApplicationDict[station][5]['WarningLevel']== 10):
                        result=5
                    elif (ApplicationDict[station][6]['WarningLevel']== 0) or (ApplicationDict[station][6]['WarningLevel']== 1) or (ApplicationDict[station][6]['WarningLevel']== 2) or (ApplicationDict[station][6]['WarningLevel']== 10):
                        result=6
                    else:
                        result=3


            else:
                if(ApplicationDict[station][4]['WarningLevel']== 2):
                    result=4
                elif(ApplicationDict[station][4]['WarningLevel']== 1):
                    result=4 
                elif(ApplicationDict[station][4]['WarningLevel']== 0):
                    result=4
                elif(ApplicationDict[station][4]['WarningLevel']== 10):
                    result=4
                else:
                    if(ApplicationDict[station][5]['WarningLevel']== 0)or(ApplicationDict[station][5]['WarningLevel']== 1)or(ApplicationDict[station][5]['WarningLevel']== 10):
                        result=5
                    elif (ApplicationDict[station][6]['WarningLevel']== 0) or (ApplicationDict[station][6]['WarningLevel']== 1) or (ApplicationDict[station][6]['WarningLevel']== 2) or (ApplicationDict[station][6]['WarningLevel']== 10):
                        result=6
                    else:
                        result=0
    print(1)
    if (result==1)or(result==2)or(result==3)or(result==4)or(result==5)or(result==6):
        ActiveApplication = {'UTC_time':int(utcobj),'OutputID': result,'StationID':station,'WarningLevel': ApplicationDict[station][result]['WarningLevel'],'J0f':ApplicationDict[station][result]['J0f'],
                             'TargetDistancef':ApplicationDict[station][result]['TargetDistancef'],'TargetSpeedf':ApplicationDict[station][result]['TargetSpeedf'],
                             'TargetClassf':ApplicationDict[station][result]['TargetClassf'],'TargetComingDirection':ApplicationDict[station][result]['TargetComingDirection']}
       # print(ActiveApplication)
    else:
        ActiveApplication= {'UTC_time':int(utcobj),'StationID':station,'OutputID': result,'WarningLevel': 3,'J0f': 0,
        'TargetDistancef':0,
        'TargetSpeedf':0,
        'TargetClassf':0,
        'TargetComingDirection':0}
       # print(ActiveApplication)
    
    print(22)
    #print('Highway_DSS result:', json.dumps(ActiveApplication))
    #ActiveApplication = json.dumps(ActiveApplication)# convert message ActiveApplication to str
    return ActiveApplication
################################################################################


################################################################################
def main():
	#broker_address = 'iot.eclipse.org'
	mqtt.Client.connected_flag=False # create a flag in  class
	mqtt.Client.bad_connection_flag=False # create a flag in  class for bad conncetions
	print('Creating new client')
	client2=mqtt.Client("P2") #create new instance
	client2.username_pw_set(username = user, password = pwd)
	client2.tls_set('./ca.crt',tls_version = ssl.PROTOCOL_TLSv1_2)
	client2.tls_insecure_set(True)
	client2.on_message = on_message #attach function to callback
	client2.on_log=on_log
	client2.on_disconnect=on_disconnect 
	client2.on_connect = on_connect 
	print('Connecting to broker')
	client2.connect(ip, port)
    
#	while not client2.connected_flag:
#		print("In wait loop")
#		time.sleep(3)
##	#client2.connect(broker_address) #connect to broker
	#client2.loop_start() #start the loop 
#	try:
#		client2.connect(ip, port, 60)
#		while not client2.connected_flag:
#			print("In wait loop")
#			#time.sleep(1)
#	except:
#		print("Can't connect")
#		sys.exit("Quitting") 
	
	#client2.loop_start() #start the loop
	while not client2.connected_flag and not client2.bad_connection_flag: #wait in loop
		print("In wait loop")
		time.sleep(1)
		break 
		if client2.bad_connection_flag:
			print("Try to connect again")
			client2.reconnect(ip, port)  
			#client2.loop_stop() #Stop the loop
			#sys.exit()
    
#	print("in Main Loop")
    
	#print('Subscribing to topics...')
	    
#	client2.subscribe('SafeStrip/HMIinputsByApp/1')
#	client2.subscribe('SafeStrip/HMIinputsByApp/2')
#	client2.subscribe('SafeStrip/HMIinputsByApp/3')
#	client2.subscribe('SafeStrip/HMIinputsByApp/4')
	#client2.subscribe('SafeStrip/HMIinputsByApp/5')
	#client2.subscribe('SafeStrip/HMIinputsByApp/6')
	#client2.subscribe('SafeStrip/VMS_VDS')
	#print('Subscribed to topics.\n')
		
	
	print('Start publishing and receiving messages...\n')
	
	#client2.loop_start() #start the loop
#	while True:
		
#	if ActiveApplication['OutputID']!= 0 and Active_Application_Flag['StationID']==0:
#		print("Station_id",ActiveApplication['StationID'])
#		print("(Application id , Warning Level)=(",ActiveApplication['OutputID'],ActiveApplication['WarningLevel'],")") 
#		#if ActiveApplication['StationID']!=0: 
#		DSS_message = struct.pack(decoding_key,int(ActiveApplication['UTC_time']),int(ActiveApplication['OutputID']),int(ActiveApplication['StationID']),
#                            int(ActiveApplication['WarningLevel']),float(ActiveApplication['J0f']),float(ActiveApplication['TargetDistancef']),
#                            float(ActiveApplication['TargetSpeedf']),int(ActiveApplication['TargetClassf']),int(ActiveApplication['TargetComingDirection']))
#		new_topic = 'SafeStrip/HMIinputsByApp_active/'+str(ActiveApplication['StationID'])
#		print('Publishing message {} to topic {}'.format(DSS_message, new_topic))
#		client2.publish(new_topic,DSS_message)
#		
#		             
#		print('\n')
#		time.sleep(0.01)
	#client2.loop_stop() #stop the loop
#	try:
#		client2.loop_forever()
#	except KeyboardInterrupt:
#		client2.disconnect()
#		exit(0)
	try:
		print(" [*] Start waiting loop.")
		client2.loop_forever(retry_first_connection=True)
    
	except KeyboardInterrupt:
		client2.disconnect()
		print(" [*] Disconnected.\n")
		client2.loop_stop()
		print("\n\n [*] Waiting loop stopped.")    
	return
################################################################################


if __name__ == "__main__":
	main()