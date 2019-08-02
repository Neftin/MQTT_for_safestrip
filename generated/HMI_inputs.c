
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "HMI_inputs.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print HMI_inputs struct on stdio */
void
HMI_inputs_print( HMI_inputs const * S ) {
  printf( "UTC_time     = %llu\n", S->UTC_time);
  printf( "OutputID     = %u\n", S->OutputID);
  printf( "WarningLevel = %hhu\n", S->WarningLevel);
}


/* serialize HMI_inputs struct to buffer */
void
HMI_inputs_to_buffer(
  HMI_inputs const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint32_to_buffer( S->OutputID, ptr );
  ptr += uint8_to_buffer( S->WarningLevel, ptr );
}


/* get buffer and un-serialize to HMI_inputs struct */
void
buffer_to_HMI_inputs(
  uint8_t const buffer[],
  HMI_inputs * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint32( ptr, &S->OutputID );
  ptr += buffer_to_uint8( ptr, &S->WarningLevel );
}


/* build topic for HMI_inputs struct */
void
HMI_inputs_MQTT_topic(
  HMI_inputs const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/HMI_inputs";
  snprintf( topic, topic_max_len, "%s", base_topic );
}

int
HMI_inputs_MQTT_compare( char const topic[] ) {
  int topic_len = 20;
  char const * topic_ref = "SafeStrip/HMI_inputs";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for HMI_inputs struct */
void
HMI_inputs_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/HMI_inputs";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

