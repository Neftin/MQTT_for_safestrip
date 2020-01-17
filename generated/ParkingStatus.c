
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "ParkingStatus.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print ParkingStatus struct on stdio */
void
ParkingStatus_print( ParkingStatus const * S ) {
  int i_count;
  printf( "UTC_time                = %llu\n", S->UTC_time);
  printf( "OutputID                = %d\n", S->OutputID);
  for ( i_count=0; i_count<10; ++i_count )
    printf( "IDs_free_patkings[%d]   = %u\n", i_count, S->IDs_free_patkings[i_count]);
  printf( "Number_of_free_parkings = %u\n", S->Number_of_free_parkings);
}


/* print ParkingStatus struct on file_stream */
void
ParkingStatus_fileprint( ParkingStatus const * S , FILE * file_stream ) {
  int i_count;
  fprintf( file_stream , "UTC_time                = %llu\n", S->UTC_time);
  fprintf( file_stream , "OutputID                = %d\n", S->OutputID);
  for ( i_count=0; i_count<10; ++i_count )
    fprintf( file_stream , "IDs_free_patkings[%d]   = %u\n", i_count, S->IDs_free_patkings[i_count]);
  fprintf( file_stream , "Number_of_free_parkings = %u\n", S->Number_of_free_parkings);
}


/* serialize ParkingStatus struct to buffer */
void
ParkingStatus_to_buffer(
  ParkingStatus const * S,
  uint8_t buffer[]
) {
  int i_count;
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += int32_to_buffer( S->OutputID, ptr );
  for ( i_count=0; i_count<10; ++i_count )
    { ptr += uint32_to_buffer( S->IDs_free_patkings[i_count], ptr ); }
  ptr += uint32_to_buffer( S->Number_of_free_parkings, ptr );
}


/* get buffer and un-serialize to ParkingStatus struct */
void
buffer_to_ParkingStatus(
  uint8_t const buffer[],
  ParkingStatus * S
) {
  int i_count;
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_int32( ptr, &S->OutputID );
  for ( i_count=0; i_count<10; ++i_count )
    { ptr += buffer_to_uint32( ptr, & S->IDs_free_patkings[i_count] ); }
  ptr += buffer_to_uint32( ptr, &S->Number_of_free_parkings );
}


/* build topic for ParkingStatus struct */
void
ParkingStatus_MQTT_topic(
  ParkingStatus const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/ParkingStatus";
  snprintf( topic, topic_max_len, "%s", base_topic );
}

int
ParkingStatus_MQTT_compare( char const topic[] ) {
  int topic_len = 23;
  char const * topic_ref = "SafeStrip/ParkingStatus";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for ParkingStatus struct */
void
ParkingStatus_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/ParkingStatus";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

