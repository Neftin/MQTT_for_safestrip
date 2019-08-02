
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "VirtualToll.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print VirtualToll struct on stdio */
void
VirtualToll_print( VirtualToll const * S ) {
  int i_count;
  printf( "UTC_time = %llu\n", S->UTC_time);
  printf( "OutputID = %d\n", S->OutputID);
  printf( "StripID  = %u\n", S->StripID);
  printf( "RSB_ID   = %u\n", S->RSB_ID);
  for ( i_count=0; i_count<3; ++i_count )
    printf( "RFID_ID[%d] = %u\n", i_count, S->RFID_ID[i_count]);
}


/* serialize VirtualToll struct to buffer */
void
VirtualToll_to_buffer(
  VirtualToll const * S,
  uint8_t buffer[]
) {
  int i_count;
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += int32_to_buffer( S->OutputID, ptr );
  ptr += uint32_to_buffer( S->StripID, ptr );
  ptr += uint32_to_buffer( S->RSB_ID, ptr );
  for ( i_count=0; i_count<3; ++i_count )
    { ptr += uint32_to_buffer( S->RFID_ID[i_count], ptr ); }
}


/* get buffer and un-serialize to VirtualToll struct */
void
buffer_to_VirtualToll(
  uint8_t const buffer[],
  VirtualToll * S
) {
  int i_count;
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_int32( ptr, &S->OutputID );
  ptr += buffer_to_uint32( ptr, &S->StripID );
  ptr += buffer_to_uint32( ptr, &S->RSB_ID );
  for ( i_count=0; i_count<3; ++i_count )
    { ptr += buffer_to_uint32( ptr, & S->RFID_ID[i_count] ); }
}


/* build topic for VirtualToll struct */
void
VirtualToll_MQTT_topic(
  VirtualToll const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/VirtualToll";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->RSB_ID );
}

int
VirtualToll_MQTT_compare( char const topic[] ) {
  int topic_len = 21;
  char const * topic_ref = "SafeStrip/VirtualToll";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for VirtualToll struct */
void
VirtualToll_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/VirtualToll";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

