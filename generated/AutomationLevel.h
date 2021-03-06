
/*\
  Automatically generated
\*/

#ifndef AUTOMATIONLEVEL_H
#define AUTOMATIONLEVEL_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for AutomationLevel */
typedef struct {
  uint64_t UTC_time;              /* MISSING */
  uint8_t  Automation_Level;      /* MISSING */
} AutomationLevel;

/* size of the serialized version of struct AutomationLevel */
#define AutomationLevel_size  9
#define AutomationLevel_n_fields 2


/* print AutomationLevel struct on stdio */
extern
void
buffer_to_AutomationLevel( uint8_t const buffer[], AutomationLevel * S );

/* serialize AutomationLevel struct to buffer */
extern
void
AutomationLevel_to_buffer( AutomationLevel const * S, uint8_t buffer[] );

/* get buffer and un-serialize to AutomationLevel struct */
extern
void
AutomationLevel_print( AutomationLevel const * S );

/* get buffer and un-serialize to AutomationLevel struct */
extern
void
AutomationLevel_fileprint( AutomationLevel const * S , FILE * file_stream );

/* build topic for AutomationLevel struct */
extern
void
AutomationLevel_MQTT_topic( AutomationLevel const * S, char topic[], int topic_len );

/* check topic for AutomationLevel struct */
extern
int
AutomationLevel_MQTT_compare( char const topic[] );

/* build topic for AutomationLevel struct */
extern
void
AutomationLevel_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
