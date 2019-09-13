
/*\
  Automatically generated
\*/

#ifndef PARKINGEVENT_H
#define PARKINGEVENT_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for ParkingEvent */
typedef struct {
  uint64_t UTC_time;      /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  OutputID;      /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint32_t RSB_ID;        /* Unique_indentifier_for_verhicle_or_RSU */
  uint32_t RFID_ID;       /* ID_by_RFID */
  uint32_t StripID;       /* ID_of_the_strip_sending_event */
  uint8_t  Event;         /* 0_=_exit_,_1_=_entering,_2_=_unknown */
} ParkingEvent;

/* size of the serialized version of struct ParkingEvent */
#define ParkingEvent_size 25


/* print ParkingEvent struct on stdio */
extern
void
buffer_to_ParkingEvent( uint8_t const buffer[], ParkingEvent * S );

/* serialize ParkingEvent struct to buffer */
extern
void
ParkingEvent_to_buffer( ParkingEvent const * S, uint8_t buffer[] );

/* get buffer and un-serialize to ParkingEvent struct */
extern
void
ParkingEvent_print( ParkingEvent const * S );

/* build topic for ParkingEvent struct */
extern
void
ParkingEvent_MQTT_topic( ParkingEvent const * S, char topic[], int topic_len );

/* check topic for ParkingEvent struct */
extern
int
ParkingEvent_MQTT_compare( char const topic[] );

/* build topic for ParkingEvent struct */
extern
void
ParkingEvent_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
