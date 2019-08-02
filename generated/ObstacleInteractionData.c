
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "ObstacleInteractionData.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print ObstacleInteractionData struct on stdio */
void
ObstacleInteractionData_print( ObstacleInteractionData const * S ) {
  int i_count;
  printf( "UTC_time              = %llu\n", S->UTC_time);
  printf( "OutputID              = %d\n", S->OutputID);
  printf( "WarningLevel          = %hhu\n", S->WarningLevel);
  printf( "TargetIDf             = %d\n", S->TargetIDf);
  printf( "TargetClassf          = %d\n", S->TargetClassf);
  printf( "TargetComingDirection = %hhu\n", S->TargetComingDirection);
  printf( "TargetXf              = %lg\n", S->TargetXf);
  printf( "TargetYf              = %lg\n", S->TargetYf);
  printf( "TargetDistancef       = %lg\n", S->TargetDistancef);
  printf( "TargetLengthf         = %lg\n", S->TargetLengthf);
  printf( "TargetWidthf          = %lg\n", S->TargetWidthf);
  printf( "TargetSpeedf          = %lg\n", S->TargetSpeedf);
  for ( i_count=0; i_count<4; ++i_count )
    printf( "time_slots[%d]        = %lg\n", i_count, S->time_slots[i_count]);
}


/* serialize ObstacleInteractionData struct to buffer */
void
ObstacleInteractionData_to_buffer(
  ObstacleInteractionData const * S,
  uint8_t buffer[]
) {
  int i_count;
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += int32_to_buffer( S->OutputID, ptr );
  ptr += uint8_to_buffer( S->WarningLevel, ptr );
  ptr += int32_to_buffer( S->TargetIDf, ptr );
  ptr += int32_to_buffer( S->TargetClassf, ptr );
  ptr += uint8_to_buffer( S->TargetComingDirection, ptr );
  ptr += double_to_buffer( S->TargetXf, ptr );
  ptr += double_to_buffer( S->TargetYf, ptr );
  ptr += double_to_buffer( S->TargetDistancef, ptr );
  ptr += double_to_buffer( S->TargetLengthf, ptr );
  ptr += double_to_buffer( S->TargetWidthf, ptr );
  ptr += double_to_buffer( S->TargetSpeedf, ptr );
  for ( i_count=0; i_count<4; ++i_count )
    { ptr += double_to_buffer( S->time_slots[i_count], ptr ); }
}


/* get buffer and un-serialize to ObstacleInteractionData struct */
void
buffer_to_ObstacleInteractionData(
  uint8_t const buffer[],
  ObstacleInteractionData * S
) {
  int i_count;
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_int32( ptr, &S->OutputID );
  ptr += buffer_to_uint8( ptr, &S->WarningLevel );
  ptr += buffer_to_int32( ptr, &S->TargetIDf );
  ptr += buffer_to_int32( ptr, &S->TargetClassf );
  ptr += buffer_to_uint8( ptr, &S->TargetComingDirection );
  ptr += buffer_to_double( ptr, &S->TargetXf );
  ptr += buffer_to_double( ptr, &S->TargetYf );
  ptr += buffer_to_double( ptr, &S->TargetDistancef );
  ptr += buffer_to_double( ptr, &S->TargetLengthf );
  ptr += buffer_to_double( ptr, &S->TargetWidthf );
  ptr += buffer_to_double( ptr, &S->TargetSpeedf );
  for ( i_count=0; i_count<4; ++i_count )
    { ptr += buffer_to_double( ptr, & S->time_slots[i_count] ); }
}


/* build topic for ObstacleInteractionData struct */
void
ObstacleInteractionData_MQTT_topic(
  ObstacleInteractionData const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/ObstacleInteractionData";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->OutputID );
}

int
ObstacleInteractionData_MQTT_compare( char const topic[] ) {
  int topic_len = 33;
  char const * topic_ref = "SafeStrip/ObstacleInteractionData";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for ObstacleInteractionData struct */
void
ObstacleInteractionData_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/ObstacleInteractionData";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

