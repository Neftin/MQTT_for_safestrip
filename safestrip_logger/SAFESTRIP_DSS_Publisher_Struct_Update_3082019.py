# -*- coding: utf-8 -*-
""" Latest Updared on Fri Aug 30 14:16:06 2019

 Updated on Thu Aug 29 12:00:55 2019

Updated on Fri Jul 19 12:24:27 2019

Created on Fri Feb  8 14:14:42 2019

SafeStrip DSS for Highway Environment [all 6 applications available ]
@author: Dr.Evangelia Chrysochoou/CERTH/HIT
"""
import paho.mqtt.client as mqtt #import the client1
import time
#import random
import datetime
import ssl
import struct

# Credential and connection parameters:
ip    = '93.62.253.212'
port  = 8883
user  = 'safestrip'
pwd   = 'S@f3str1p'
#topic = 'SafeStrip/#'
###################


decoding_key = 'QBBdddBB' # sequence of the data formats to unpack

########################### Get UTC timestamp ####################################################
epoch   = datetime.datetime.utcfromtimestamp(0) # 1970-1-1
dt      = datetime.datetime.utcnow()            # utc now
utcobj  = int(round((dt - epoch).total_seconds() * 1000.0)) # milliseconds precision (UTC)

########################### Global Variables ####################################################
Application={}
Application[1]={
        'UTC_time': int(utcobj),
		'OutputID':1,
		'WarningLevel':0,	
        'J0f': 0,
        'TargetDistancef':0,
        'TargetSpeedf':0,
        'TargetClassf':0,
        'TargetComingDirection':0
        }
Application[2]={
		'UTC_time': int(utcobj),
		'OutputID':2,
		'WarningLevel':0,
        'J0f': 0,
        'TargetDistancef':0,
        'TargetSpeedf':0,
        'TargetClassf':0,
        'TargetComingDirection':0
        }
Application[3]={
		'UTC_time': int(utcobj),
		'OutputID':3,
		'WarningLevel':0,
        'J0f': 0,
        'TargetDistancef':0,
        'TargetSpeedf':0,
        'TargetClassf':0,
        'TargetComingDirection':0	 
		}
	
Application[7]={
		'UTC_time': int(utcobj),
		'OutputID':7,
		'WarningLevel':0,
        'J0f': 0,
        'TargetDistancef':0,
        'TargetSpeedf':0,
        'TargetClassf':0,
        'TargetComingDirection':0	                    
		}	

ActiveApplication = {}
ActiveApplication={
		'UTC_time': 0,
		'OutputID':0,
		'WarningLevel':0,
        'J0f': 0,
        'TargetDistancef':0,
        'TargetSpeedf':0,
        'TargetClassf':0,
        'TargetComingDirection':0	                    
		}	
VMSApplication={}
VMSApplication={
        'UTC_time': 0,
		'OutputID':4,
       'VMS_traffic_condition':0,
       'VMS_roadworks':0,
       'VMS_AWC_adhesion':0,
       'VMS_HL_surface_condition':0,
       'VMS_HL_obstacle_on_the_road':0,
       'VMS_AWC_extreme_weather_condition':0,
       'VMS_AWC_visibility':0,
       'VMS_AWC_precipitation':0,
       'VMS_stationary_vehicle':0
       }
ActiveVMS={}
ActiveVMS={
        'UTC_time': 0,
		'OutputID':4,
       'VMS_traffic_condition':0,
       'VMS_roadworks':0,
       'VMS_AWC_adhesion':0,
       'VMS_HL_surface_condition':0,
       'VMS_HL_obstacle_on_the_road':0,
       'VMS_AWC_extreme_weather_condition':0,
       'VMS_AWC_visibility':0,
       'VMS_AWC_precipitation':0,
       'VMS_stationary_vehicle':0
       }
VMSActivation=0
ParkingBooking=0
VirtualTolls=0
result = 7
################################################################################


################################################################################
def on_message(client, userdata, message):
	global Application
	global VMSApplication,VMSActivation
	#msg = str(message.payload.decode("utf-8"))
	
	topic = str(message.topic)
	
	print('Received message {} from topic {}'.format(msg, topic))
	#msg_json = json.loads(msg)
	#name = msg_json['OutputID']
	if topic =='SafeStrip/VMS_VDS':
		msg=struct.unpack('QBBBBBBBBBB',message.payload)
		VMSActivation=1
		VMSApplication['UTC_time']=msg[0]
		VMSApplication['OutputID']=msg[1]
		VMSApplication['VMS_traffic_condition']=msg[2]
		VMSApplication['VMS_roadworks']=msg[3]
		VMSApplication['VMS_AWC_adhesion']=msg[4]
		VMSApplication['VMS_HL_surface_condition']=msg[5]
		VMSApplication['VMS_HL_obstacle_on_the_road']=msg[6]
		VMSApplication['VMS_AWC_extreme_weather_condition']=msg[7]
		VMSApplication['VMS_AWC_visibility']=msg[8]
		VMSApplication['VMS_AWC_precipitation']=msg[9]
		VMSApplication['VMS_stationary_vehicle']=msg[10]
	else:
		msg=struct.unpack( 'QBBdddBB' , message.payload )
		VMSActivation=0
		name=msg[1] #Level = msg_json['WarningLevel']
		Level=msg[2]
	#Application[name]['UTC_time'] = msg_json['UTC_time']
		Application[name]['UTC_time']=msg[0] 
		Application[name]['WarningLevel'] = Level
		Application[name]['J0f']=msg[3]
		Application[name]['TargetDistancef']=msg[4]
		Application[name]['TargetSpeedf']=msg[5]
		Application[name]['TargetClassf']=msg[6]
		Application[name]['TargetComingDirection']=msg[7]
	print(1235)
	Highway_DSS()
	# print("message received ", str(message.payload.decode("utf-8")))
	# print("message topic=",message.topic)
	# print("message qos=",message.qos)
	# print("message retain flag=",message.retain)
################################################################################


################################################################################
def Highway_DSS():
    global ActiveApplication
    global result
    global ActiveVMS
    print(123)
    if(Application[1]['WarningLevel']== 2):
        result =1
        
    elif (Application[1]['WarningLevel'] == 1):
        if (Application[2]['WarningLevel'] == 2):
            result = 2
            
        elif (Application[2]['WarningLevel'] == 1):
            if (Application[3]['WarningLevel'] == 2):
                result = 3
            else:
                result=1
    elif(Application[1]['WarningLevel']== 0) or (Application[1]['WarningLevel'] == 3): # With warning level =0 or 3
        if (Application[2]['WarningLevel'] == 2):
             result = 2   
        elif (Application[2]['WarningLevel'] == 1):
            if (Application[3]['WarningLevel'] == 2):  
                result = 3
            else:
                result = 2
        elif (Application[2]['WarningLevel']== 0) or (Application[2]['WarningLevel'] == 3):  
            if (Application[3]['WarningLevel'] == 2) or (Application[3]['WarningLevel'] == 1):
                result = 3
            elif (Application[3]['WarningLevel'] == 0) or (Application[3]['WarningLevel'] == 3): 
                if (VMSActivation == 1):
                     result = 4
                elif (VMSActivation==0):
                    if (ParkingBooking==1):
                          result = 5
                    elif (ParkingBooking==0):
                        if (VirtualTolls==1):
                            result = 6
                        else:
                            result = 7
    print(1)
    if (result==1)or(result==2)or(result==3):
        ActiveApplication = {'UTC_time':int(utcobj),'OutputID': result,'WarningLevel': Application[result]['WarningLevel'],'J0f':Application[result]['J0f'],
                             'TargetDistancef':Application[result]['TargetDistancef'],'TargetSpeedf':Application[result]['TargetSpeedf'],
                             'TargetClassf':Application[result]['TargetClassf'],'TargetComingDirection':Application[result]['TargetComingDirection']}
        print(ActiveApplication)
    elif(result==7):
        ActiveApplication = {'UTC_time':int(utcobj),'OutputID': result,'WarningLevel': 0,'J0f': 0,
        'TargetDistancef':0,
        'TargetSpeedf':0,
        'TargetClassf':0,
        'TargetComingDirection':0}
        print(ActiveApplication)
    elif(result==4):
        ActiveVMS={'UTC_time':int(utcobj),'OutputID':result,'VMS_traffic_condition':VMSApplication['VMS_traffic_condition'],
        'VMS_roadworks':VMSApplication['VMS_roadworks'],'VMS_AWC_adhesion':VMSApplication['VMS_AWC_adhesion'],'VMS_HL_surface_condition':VMSApplication['VMS_HL_surface_condition'],
       'VMS_HL_obstacle_on_the_road': VMSApplication['VMS_HL_obstacle_on_the_road'],'VMS_AWC_extreme_weather_condition':VMSApplication['VMS_AWC_extreme_weather_condition'],
        'VMS_AWC_visibility': VMSApplication['VMS_AWC_visibility'],'VMS_AWC_precipitation':VMSApplication['VMS_AWC_precipitation'],
        'VMS_stationary_vehicle':VMSApplication['VMS_stationary_vehicle']
        }
        print(ActiveVMS)
    #print('Highway_DSS result:', json.dumps(ActiveApplication))
    #ActiveApplication = json.dumps(ActiveApplication)# convert message ActiveApplication to str
    return 
################################################################################







################################################################################
def main():
	#broker_address = 'iot.eclipse.org'
	
	print('Creating new client')
	client2=mqtt.Client("P2") #create new instance
	client2.username_pw_set(username = user, password = pwd)
	client2.tls_set('./ca.crt',tls_version = ssl.PROTOCOL_TLSv1_2)
	client2.tls_insecure_set(True)
	client2.on_message = on_message #attach function to callback
	print('Connecting to broker')
	#client2.connect(broker_address) #connect to broker
	client2.connect(ip, port, 60) 
	print('Subscribing to topics...')
	    
	client2.subscribe('SafeStrip/HMIinputsByApp/1')
	client2.subscribe('SafeStrip/HMIinputsByApp/2')
	client2.subscribe('SafeStrip/HMIinputsByApp/3')
	client2.subscribe('SafeStrip/HMIinputsByApp/4')
	client2.subscribe('SafeStrip/HMIinputsByApp/5')
	client2.subscribe('SafeStrip/HMIinputsByApp/6')
	client2.subscribe('SafeStrip/VMS_VDS')
	print('Subscribed to topics.\n')
		
	
	print('Start publishing and receiving messages...\n')
	
	client2.loop_start() #start the loop
	while True:
		DSS_message = struct.pack('QBBdddBB',int(ActiveApplication['UTC_time']),int(ActiveApplication['OutputID']),
                            int(ActiveApplication['WarningLevel']),float(ActiveApplication['J0f']),float(ActiveApplication['TargetDistancef']),
                            float(ActiveApplication['TargetSpeedf']),int(ActiveApplication['TargetClassf']),int(ActiveApplication['TargetComingDirection']))  
		VMS_message=struct.pack('QBBBBBBBBBB',int(ActiveVMS['UTC_time']), int(ActiveVMS['OutputID']),int(ActiveVMS['VMS_traffic_condition']),int(ActiveVMS['VMS_roadworks']),int(ActiveVMS['VMS_AWC_adhesion']),
                          int(ActiveVMS['VMS_HL_surface_condition']),int(ActiveVMS['VMS_HL_obstacle_on_the_road']),int(ActiveVMS['VMS_AWC_extreme_weather_condition']),int(ActiveVMS['VMS_AWC_visibility']),int(ActiveVMS['VMS_AWC_precipitation']),int(ActiveVMS['VMS_stationary_vehicle']))
		if result==1:
		     new_topic='SafeStrip/HMIinputsByApp_active/1'
		     client2.publish(new_topic,DSS_message)
		elif result==2:
		     new_topic='SafeStrip/HMIinputsByApp_active/2'  
		     client2.publish(new_topic,DSS_message)
		elif result==3:
		     new_topic='SafeStrip/HMIinputsByApp_active/3'   
		     client2.publish(new_topic,DSS_message)
		elif result==4:
		     new_topic='SafeStrip/VMS_VDS_active'  #VMS_VDS_active 
		     client2.publish(new_topic,VMS_message)
		     sleep(1) # wait
		print('\n')
	client2.loop_stop() #stop the loop
	
	return
################################################################################


if __name__ == "__main__":
	main()