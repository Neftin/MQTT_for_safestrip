
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "HMI_activations.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print HMI_activations struct on stdio */
void
HMI_activations_print( HMI_activations const * S ) {
  printf( "UTC_time    = %u\n", S->UTC_time);
  printf( "apps_active = %u\n", S->apps_active);
}


/* serialize HMI_activations struct to buffer */
void
HMI_activations_to_buffer(
  HMI_activations const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint32_to_buffer( S->UTC_time, ptr );
  ptr += uint32_to_buffer( S->apps_active, ptr );
}


/* get buffer and un-serialize to HMI_activations struct */
void
buffer_to_HMI_activations(
  uint8_t const buffer[],
  HMI_activations * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint32( ptr, &S->UTC_time );
  ptr += buffer_to_uint32( ptr, &S->apps_active );
}


/* build topic for HMI_activations struct */
void
HMI_activations_MQTT_topic(
  HMI_activations const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/HMI_activations";
  snprintf( topic, topic_max_len, "%s", base_topic );
}

int
HMI_activations_MQTT_compare( char const topic[] ) {
  int topic_len = 25;
  char const * topic_ref = "SafeStrip/HMI_activations";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for HMI_activations struct */
void
HMI_activations_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/HMI_activations";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

