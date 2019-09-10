
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "VirtualToll_output.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print VirtualToll_output struct on stdio */
void
VirtualToll_output_print( VirtualToll_output const * S ) {
  int i_count;
  printf( "UTC_time              = %llu\n", S->UTC_time);
  for ( i_count=0; i_count<3; ++i_count )
    printf( "RFID_ID[%d]           = %u\n", i_count, S->RFID_ID[i_count]);
  printf( "virtual_gate_distance = %d\n", S->virtual_gate_distance);
  printf( "payment_amount        = %u\n", S->payment_amount);
  printf( "payment_confirmation  = %hhu\n", S->payment_confirmation);
}


/* serialize VirtualToll_output struct to buffer */
void
VirtualToll_output_to_buffer(
  VirtualToll_output const * S,
  uint8_t buffer[]
) {
  int i_count;
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  for ( i_count=0; i_count<3; ++i_count )
    { ptr += uint32_to_buffer( S->RFID_ID[i_count], ptr ); }
  ptr += int32_to_buffer( S->virtual_gate_distance, ptr );
  ptr += uint32_to_buffer( S->payment_amount, ptr );
  ptr += uint8_to_buffer( S->payment_confirmation, ptr );
}


/* get buffer and un-serialize to VirtualToll_output struct */
void
buffer_to_VirtualToll_output(
  uint8_t const buffer[],
  VirtualToll_output * S
) {
  int i_count;
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  for ( i_count=0; i_count<3; ++i_count )
    { ptr += buffer_to_uint32( ptr, & S->RFID_ID[i_count] ); }
  ptr += buffer_to_int32( ptr, &S->virtual_gate_distance );
  ptr += buffer_to_uint32( ptr, &S->payment_amount );
  ptr += buffer_to_uint8( ptr, &S->payment_confirmation );
}


/* build topic for VirtualToll_output struct */
void
VirtualToll_output_MQTT_topic(
  VirtualToll_output const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/VirtualToll_output";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->RFID_ID );
}

int
VirtualToll_output_MQTT_compare( char const topic[] ) {
  int topic_len = 28;
  char const * topic_ref = "SafeStrip/VirtualToll_output";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for VirtualToll_output struct */
void
VirtualToll_output_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/VirtualToll_output";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

