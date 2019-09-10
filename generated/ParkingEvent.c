
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "ParkingEvent.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print ParkingEvent struct on stdio */
void
ParkingEvent_print( ParkingEvent const * S ) {
  printf( "UTC_time = %llu\n", S->UTC_time);
  printf( "OutputID = %d\n", S->OutputID);
  printf( "RSB_ID   = %u\n", S->RSB_ID);
  printf( "RFID_ID  = %u\n", S->RFID_ID);
  printf( "StripID  = %u\n", S->StripID);
  printf( "Event_   = %hhu\n", S->Event_);
}


/* serialize ParkingEvent struct to buffer */
void
ParkingEvent_to_buffer(
  ParkingEvent const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += int32_to_buffer( S->OutputID, ptr );
  ptr += uint32_to_buffer( S->RSB_ID, ptr );
  ptr += uint32_to_buffer( S->RFID_ID, ptr );
  ptr += uint32_to_buffer( S->StripID, ptr );
  ptr += uint8_to_buffer( S->Event_, ptr );
}


/* get buffer and un-serialize to ParkingEvent struct */
void
buffer_to_ParkingEvent(
  uint8_t const buffer[],
  ParkingEvent * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_int32( ptr, &S->OutputID );
  ptr += buffer_to_uint32( ptr, &S->RSB_ID );
  ptr += buffer_to_uint32( ptr, &S->RFID_ID );
  ptr += buffer_to_uint32( ptr, &S->StripID );
  ptr += buffer_to_uint8( ptr, &S->Event_ );
}


/* build topic for ParkingEvent struct */
void
ParkingEvent_MQTT_topic(
  ParkingEvent const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/ParkingEvent";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->StripID );
}

int
ParkingEvent_MQTT_compare( char const topic[] ) {
  int topic_len = 22;
  char const * topic_ref = "SafeStrip/ParkingEvent";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for ParkingEvent struct */
void
ParkingEvent_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/ParkingEvent";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

