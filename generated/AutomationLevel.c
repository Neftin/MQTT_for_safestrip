
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "AutomationLevel.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print AutomationLevel struct on stdio */
void
AutomationLevel_print( AutomationLevel const * S ) {
  printf( "UTC_time         = %llu\n", S->UTC_time);
  printf( "Automation_Level = %hhu\n", S->Automation_Level);
}


/* print AutomationLevel struct on file_stream */
void
AutomationLevel_fileprint( AutomationLevel const * S , FILE * file_stream ) {
  fprintf( file_stream , "UTC_time         = %llu\n", S->UTC_time);
  fprintf( file_stream , "Automation_Level = %hhu\n", S->Automation_Level);
}


/* serialize AutomationLevel struct to buffer */
void
AutomationLevel_to_buffer(
  AutomationLevel const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint8_to_buffer( S->Automation_Level, ptr );
}


/* get buffer and un-serialize to AutomationLevel struct */
void
buffer_to_AutomationLevel(
  uint8_t const buffer[],
  AutomationLevel * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint8( ptr, &S->Automation_Level );
}


/* build topic for AutomationLevel struct */
void
AutomationLevel_MQTT_topic(
  AutomationLevel const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/AutomationLevel";
  snprintf( topic, topic_max_len, "%s", base_topic );
}

int
AutomationLevel_MQTT_compare( char const topic[] ) {
  int topic_len = 25;
  char const * topic_ref = "SafeStrip/AutomationLevel";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for AutomationLevel struct */
void
AutomationLevel_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/AutomationLevel";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

