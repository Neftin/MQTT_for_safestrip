
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "SetCodriverParameters.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print SetCodriverParameters struct on stdio */
void
SetCodriverParameters_print( SetCodriverParameters const * S ) {
  printf( "UTC_time      = %llu\n", S->UTC_time);
  printf( "jerk_lower    = %lg\n", S->jerk_lower);
  printf( "jerk_higher   = %lg\n", S->jerk_higher);
  printf( "reaction_time = %lg\n", S->reaction_time);
  printf( "p1            = %lg\n", S->p1);
  printf( "p2            = %lg\n", S->p2);
  printf( "p3            = %lg\n", S->p3);
}


/* print SetCodriverParameters struct on file_stream */
void
SetCodriverParameters_fileprint( SetCodriverParameters const * S , FILE * file_stream ) {
  fprintf( file_stream , "UTC_time      = %llu\n", S->UTC_time);
  fprintf( file_stream , "jerk_lower    = %lg\n", S->jerk_lower);
  fprintf( file_stream , "jerk_higher   = %lg\n", S->jerk_higher);
  fprintf( file_stream , "reaction_time = %lg\n", S->reaction_time);
  fprintf( file_stream , "p1            = %lg\n", S->p1);
  fprintf( file_stream , "p2            = %lg\n", S->p2);
  fprintf( file_stream , "p3            = %lg\n", S->p3);
}


/* serialize SetCodriverParameters struct to buffer */
void
SetCodriverParameters_to_buffer(
  SetCodriverParameters const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += double_to_buffer( S->jerk_lower, ptr );
  ptr += double_to_buffer( S->jerk_higher, ptr );
  ptr += double_to_buffer( S->reaction_time, ptr );
  ptr += double_to_buffer( S->p1, ptr );
  ptr += double_to_buffer( S->p2, ptr );
  ptr += double_to_buffer( S->p3, ptr );
}


/* get buffer and un-serialize to SetCodriverParameters struct */
void
buffer_to_SetCodriverParameters(
  uint8_t const buffer[],
  SetCodriverParameters * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_double( ptr, &S->jerk_lower );
  ptr += buffer_to_double( ptr, &S->jerk_higher );
  ptr += buffer_to_double( ptr, &S->reaction_time );
  ptr += buffer_to_double( ptr, &S->p1 );
  ptr += buffer_to_double( ptr, &S->p2 );
  ptr += buffer_to_double( ptr, &S->p3 );
}


/* build topic for SetCodriverParameters struct */
void
SetCodriverParameters_MQTT_topic(
  SetCodriverParameters const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/SetCodriverParameters";
  snprintf( topic, topic_max_len, "%s", base_topic );
}

int
SetCodriverParameters_MQTT_compare( char const topic[] ) {
  int topic_len = 31;
  char const * topic_ref = "SafeStrip/SetCodriverParameters";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for SetCodriverParameters struct */
void
SetCodriverParameters_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/SetCodriverParameters";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

