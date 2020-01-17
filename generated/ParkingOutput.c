
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "ParkingOutput.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print ParkingOutput struct on stdio */
void
ParkingOutput_print( ParkingOutput const * S ) {
  printf( "UTC_time                   = %llu\n", S->UTC_time);
  printf( "OutputID                   = %d\n", S->OutputID);
  printf( "RFID_ID                    = %u\n", S->RFID_ID);
  printf( "Payment_Amount             = %u\n", S->Payment_Amount);
  printf( "Payment_and_parking_status = %u\n", S->Payment_and_parking_status);
}


/* print ParkingOutput struct on file_stream */
void
ParkingOutput_fileprint( ParkingOutput const * S , FILE * file_stream ) {
  fprintf( file_stream , "UTC_time                   = %llu\n", S->UTC_time);
  fprintf( file_stream , "OutputID                   = %d\n", S->OutputID);
  fprintf( file_stream , "RFID_ID                    = %u\n", S->RFID_ID);
  fprintf( file_stream , "Payment_Amount             = %u\n", S->Payment_Amount);
  fprintf( file_stream , "Payment_and_parking_status = %u\n", S->Payment_and_parking_status);
}


/* serialize ParkingOutput struct to buffer */
void
ParkingOutput_to_buffer(
  ParkingOutput const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += int32_to_buffer( S->OutputID, ptr );
  ptr += uint32_to_buffer( S->RFID_ID, ptr );
  ptr += uint32_to_buffer( S->Payment_Amount, ptr );
  ptr += uint32_to_buffer( S->Payment_and_parking_status, ptr );
}


/* get buffer and un-serialize to ParkingOutput struct */
void
buffer_to_ParkingOutput(
  uint8_t const buffer[],
  ParkingOutput * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_int32( ptr, &S->OutputID );
  ptr += buffer_to_uint32( ptr, &S->RFID_ID );
  ptr += buffer_to_uint32( ptr, &S->Payment_Amount );
  ptr += buffer_to_uint32( ptr, &S->Payment_and_parking_status );
}


/* build topic for ParkingOutput struct */
void
ParkingOutput_MQTT_topic(
  ParkingOutput const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/ParkingOutput";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->RFID_ID );
}

int
ParkingOutput_MQTT_compare( char const topic[] ) {
  int topic_len = 23;
  char const * topic_ref = "SafeStrip/ParkingOutput";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for ParkingOutput struct */
void
ParkingOutput_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/ParkingOutput";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

