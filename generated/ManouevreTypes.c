
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "ManouevreTypes.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print ManouevreTypes struct on stdio */
void
ManouevreTypes_print( ManouevreTypes const * S ) {
  printf( "UTC_time                = %llu\n", S->UTC_time);
  printf( "OutputID                = %d\n", S->OutputID);
  printf( "FirstManoeuverTypeLong  = %hhu\n", S->FirstManoeuverTypeLong);
  printf( "FirstManoeuverTypeLat   = %hhu\n", S->FirstManoeuverTypeLat);
  printf( "SecondManoeuverTypeLong = %hhu\n", S->SecondManoeuverTypeLong);
  printf( "SecondManoeuverTypeLat  = %hhu\n", S->SecondManoeuverTypeLat);
}


/* print ManouevreTypes struct on file_stream */
void
ManouevreTypes_fileprint( ManouevreTypes const * S , FILE * file_stream ) {
  fprintf( file_stream , "UTC_time                = %llu\n", S->UTC_time);
  fprintf( file_stream , "OutputID                = %d\n", S->OutputID);
  fprintf( file_stream , "FirstManoeuverTypeLong  = %hhu\n", S->FirstManoeuverTypeLong);
  fprintf( file_stream , "FirstManoeuverTypeLat   = %hhu\n", S->FirstManoeuverTypeLat);
  fprintf( file_stream , "SecondManoeuverTypeLong = %hhu\n", S->SecondManoeuverTypeLong);
  fprintf( file_stream , "SecondManoeuverTypeLat  = %hhu\n", S->SecondManoeuverTypeLat);
}


/* serialize ManouevreTypes struct to buffer */
void
ManouevreTypes_to_buffer(
  ManouevreTypes const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += int32_to_buffer( S->OutputID, ptr );
  ptr += uint8_to_buffer( S->FirstManoeuverTypeLong, ptr );
  ptr += uint8_to_buffer( S->FirstManoeuverTypeLat, ptr );
  ptr += uint8_to_buffer( S->SecondManoeuverTypeLong, ptr );
  ptr += uint8_to_buffer( S->SecondManoeuverTypeLat, ptr );
}


/* get buffer and un-serialize to ManouevreTypes struct */
void
buffer_to_ManouevreTypes(
  uint8_t const buffer[],
  ManouevreTypes * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_int32( ptr, &S->OutputID );
  ptr += buffer_to_uint8( ptr, &S->FirstManoeuverTypeLong );
  ptr += buffer_to_uint8( ptr, &S->FirstManoeuverTypeLat );
  ptr += buffer_to_uint8( ptr, &S->SecondManoeuverTypeLong );
  ptr += buffer_to_uint8( ptr, &S->SecondManoeuverTypeLat );
}


/* build topic for ManouevreTypes struct */
void
ManouevreTypes_MQTT_topic(
  ManouevreTypes const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/ManoeuvreTypes";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->OutputID );
}

int
ManouevreTypes_MQTT_compare( char const topic[] ) {
  int topic_len = 24;
  char const * topic_ref = "SafeStrip/ManoeuvreTypes";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for ManouevreTypes struct */
void
ManouevreTypes_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/ManoeuvreTypes";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

