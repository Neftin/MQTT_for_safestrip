
/*\
  Automatically generated
\*/

#ifndef PARKINGEVENT_H
#define PARKINGEVENT_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for ParkingEvent */
typedef struct {
  uint64_t UTC_time;      /* MISSING */
  int32_t  OutputID;      /* MISSING */
  uint32_t RSB_ID;        /* MISSING */
  uint32_t RFID_ID;       /* MISSING */
  uint32_t StripID;       /* MISSING */
  uint8_t  Event;         /* MISSING */
} ParkingEvent;

/* size of the serialized version of struct ParkingEvent */
#define ParkingEvent_size  25
#define ParkingEvent_n_fields 6


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

/* get buffer and un-serialize to ParkingEvent struct */
extern
void
ParkingEvent_fileprint( ParkingEvent const * S , FILE * file_stream );

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
