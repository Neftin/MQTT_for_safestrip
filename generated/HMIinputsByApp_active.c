
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "HMIinputsByApp_active.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print HMIinputsByApp_active struct on stdio */
void
HMIinputsByApp_active_print( HMIinputsByApp_active const * S ) {
  printf( "UTC_time              = %llu\n", S->UTC_time);
  printf( "OutputID              = %u\n", S->OutputID);
  printf( "StationID             = %u\n", S->StationID);
  printf( "WarningLevel          = %hhu\n", S->WarningLevel);
  printf( "J0f                   = %lg\n", S->J0f);
  printf( "TargetDistancef       = %lg\n", S->TargetDistancef);
  printf( "TargetSpeedf          = %lg\n", S->TargetSpeedf);
  printf( "TargetClassf          = %d\n", S->TargetClassf);
  printf( "TargetComingDirection = %hhu\n", S->TargetComingDirection);
}


/* print HMIinputsByApp_active struct on file_stream */
void
HMIinputsByApp_active_fileprint( HMIinputsByApp_active const * S , FILE * file_stream ) {
  fprintf( file_stream , "UTC_time              = %llu\n", S->UTC_time);
  fprintf( file_stream , "OutputID              = %u\n", S->OutputID);
  fprintf( file_stream , "StationID             = %u\n", S->StationID);
  fprintf( file_stream , "WarningLevel          = %hhu\n", S->WarningLevel);
  fprintf( file_stream , "J0f                   = %lg\n", S->J0f);
  fprintf( file_stream , "TargetDistancef       = %lg\n", S->TargetDistancef);
  fprintf( file_stream , "TargetSpeedf          = %lg\n", S->TargetSpeedf);
  fprintf( file_stream , "TargetClassf          = %d\n", S->TargetClassf);
  fprintf( file_stream , "TargetComingDirection = %hhu\n", S->TargetComingDirection);
}


/* serialize HMIinputsByApp_active struct to buffer */
void
HMIinputsByApp_active_to_buffer(
  HMIinputsByApp_active const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint32_to_buffer( S->OutputID, ptr );
  ptr += uint32_to_buffer( S->StationID, ptr );
  ptr += uint8_to_buffer( S->WarningLevel, ptr );
  ptr += double_to_buffer( S->J0f, ptr );
  ptr += double_to_buffer( S->TargetDistancef, ptr );
  ptr += double_to_buffer( S->TargetSpeedf, ptr );
  ptr += int32_to_buffer( S->TargetClassf, ptr );
  ptr += uint8_to_buffer( S->TargetComingDirection, ptr );
}


/* get buffer and un-serialize to HMIinputsByApp_active struct */
void
buffer_to_HMIinputsByApp_active(
  uint8_t const buffer[],
  HMIinputsByApp_active * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint32( ptr, &S->OutputID );
  ptr += buffer_to_uint32( ptr, &S->StationID );
  ptr += buffer_to_uint8( ptr, &S->WarningLevel );
  ptr += buffer_to_double( ptr, &S->J0f );
  ptr += buffer_to_double( ptr, &S->TargetDistancef );
  ptr += buffer_to_double( ptr, &S->TargetSpeedf );
  ptr += buffer_to_int32( ptr, &S->TargetClassf );
  ptr += buffer_to_uint8( ptr, &S->TargetComingDirection );
}


/* build topic for HMIinputsByApp_active struct */
void
HMIinputsByApp_active_MQTT_topic(
  HMIinputsByApp_active const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/HMIinputsByApp_active";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->StationID );
}

int
HMIinputsByApp_active_MQTT_compare( char const topic[] ) {
  int topic_len = 31;
  char const * topic_ref = "SafeStrip/HMIinputsByApp_active";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for HMIinputsByApp_active struct */
void
HMIinputsByApp_active_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/HMIinputsByApp_active";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

