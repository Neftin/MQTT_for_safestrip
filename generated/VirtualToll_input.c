
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "VirtualToll_input.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print VirtualToll_input struct on stdio */
void
VirtualToll_input_print( VirtualToll_input const * S ) {
  printf( "UTC_time              = %llu\n", S->UTC_time);
  printf( "StationType           = %hhu\n", S->StationType);
  printf( "position_latitude     = %d\n", S->position_latitude);
  printf( "position_longitude    = %d\n", S->position_longitude);
  printf( "virtual_gate_distance = %d\n", S->virtual_gate_distance);
  printf( "StripID               = %u\n", S->StripID);
  printf( "RSB_ID                = %u\n", S->RSB_ID);
  printf( "RFID_ID               = %u\n", S->RFID_ID);
}


/* print VirtualToll_input struct on file_stream */
void
VirtualToll_input_fileprint( VirtualToll_input const * S , FILE * file_stream ) {
  fprintf( file_stream , "UTC_time              = %llu\n", S->UTC_time);
  fprintf( file_stream , "StationType           = %hhu\n", S->StationType);
  fprintf( file_stream , "position_latitude     = %d\n", S->position_latitude);
  fprintf( file_stream , "position_longitude    = %d\n", S->position_longitude);
  fprintf( file_stream , "virtual_gate_distance = %d\n", S->virtual_gate_distance);
  fprintf( file_stream , "StripID               = %u\n", S->StripID);
  fprintf( file_stream , "RSB_ID                = %u\n", S->RSB_ID);
  fprintf( file_stream , "RFID_ID               = %u\n", S->RFID_ID);
}


/* serialize VirtualToll_input struct to buffer */
void
VirtualToll_input_to_buffer(
  VirtualToll_input const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint8_to_buffer( S->StationType, ptr );
  ptr += int32_to_buffer( S->position_latitude, ptr );
  ptr += int32_to_buffer( S->position_longitude, ptr );
  ptr += int32_to_buffer( S->virtual_gate_distance, ptr );
  ptr += uint32_to_buffer( S->StripID, ptr );
  ptr += uint32_to_buffer( S->RSB_ID, ptr );
  ptr += uint32_to_buffer( S->RFID_ID, ptr );
}


/* get buffer and un-serialize to VirtualToll_input struct */
void
buffer_to_VirtualToll_input(
  uint8_t const buffer[],
  VirtualToll_input * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint8( ptr, &S->StationType );
  ptr += buffer_to_int32( ptr, &S->position_latitude );
  ptr += buffer_to_int32( ptr, &S->position_longitude );
  ptr += buffer_to_int32( ptr, &S->virtual_gate_distance );
  ptr += buffer_to_uint32( ptr, &S->StripID );
  ptr += buffer_to_uint32( ptr, &S->RSB_ID );
  ptr += buffer_to_uint32( ptr, &S->RFID_ID );
}


/* build topic for VirtualToll_input struct */
void
VirtualToll_input_MQTT_topic(
  VirtualToll_input const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/VirtualToll_input";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->RFID_ID );
}

int
VirtualToll_input_MQTT_compare( char const topic[] ) {
  int topic_len = 27;
  char const * topic_ref = "SafeStrip/VirtualToll_input";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for VirtualToll_input struct */
void
VirtualToll_input_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/VirtualToll_input";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

