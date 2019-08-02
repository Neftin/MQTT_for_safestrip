
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "ParkingApplication.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print ParkingApplication struct on stdio */
void
ParkingApplication_print( ParkingApplication const * S ) {
  printf( "UTC_time                     = %llu\n", S->UTC_time);
  printf( "OutputID                     = %d\n", S->OutputID);
  printf( "StripID                      = %u\n", S->StripID);
  printf( "Event_vehicle_pass_direction = %hhu\n", S->Event_vehicle_pass_direction);
}


/* serialize ParkingApplication struct to buffer */
void
ParkingApplication_to_buffer(
  ParkingApplication const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += int32_to_buffer( S->OutputID, ptr );
  ptr += uint32_to_buffer( S->StripID, ptr );
  ptr += uint8_to_buffer( S->Event_vehicle_pass_direction, ptr );
}


/* get buffer and un-serialize to ParkingApplication struct */
void
buffer_to_ParkingApplication(
  uint8_t const buffer[],
  ParkingApplication * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_int32( ptr, &S->OutputID );
  ptr += buffer_to_uint32( ptr, &S->StripID );
  ptr += buffer_to_uint8( ptr, &S->Event_vehicle_pass_direction );
}


/* build topic for ParkingApplication struct */
void
ParkingApplication_MQTT_topic(
  ParkingApplication const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/ParkingApplication";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->StripID );
}

int
ParkingApplication_MQTT_compare( char const topic[] ) {
  int topic_len = 28;
  char const * topic_ref = "SafeStrip/ParkingApplication";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for ParkingApplication struct */
void
ParkingApplication_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/ParkingApplication";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

