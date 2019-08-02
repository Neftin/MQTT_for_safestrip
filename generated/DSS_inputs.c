
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "DSS_inputs.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print DSS_inputs struct on stdio */
void
DSS_inputs_print( DSS_inputs const * S ) {
  printf( "UTC_time     = %llu\n", S->UTC_time);
  printf( "OutputID     = %u\n", S->OutputID);
  printf( "WarningLevel = %hhu\n", S->WarningLevel);
}


/* serialize DSS_inputs struct to buffer */
void
DSS_inputs_to_buffer(
  DSS_inputs const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint32_to_buffer( S->OutputID, ptr );
  ptr += uint8_to_buffer( S->WarningLevel, ptr );
}


/* get buffer and un-serialize to DSS_inputs struct */
void
buffer_to_DSS_inputs(
  uint8_t const buffer[],
  DSS_inputs * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint32( ptr, &S->OutputID );
  ptr += buffer_to_uint8( ptr, &S->WarningLevel );
}


/* build topic for DSS_inputs struct */
void
DSS_inputs_MQTT_topic(
  DSS_inputs const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/DSS_inputs";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->OutputID );
}

int
DSS_inputs_MQTT_compare( char const topic[] ) {
  int topic_len = 20;
  char const * topic_ref = "SafeStrip/DSS_inputs";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for DSS_inputs struct */
void
DSS_inputs_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/DSS_inputs";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

