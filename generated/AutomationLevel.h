
/*\
  Automatically generated
\*/

#ifndef AUTOMATIONLEVEL_H
#define AUTOMATIONLEVEL_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for AutomationLevel */
typedef struct {
  uint64_t UTC_time;              /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  uint8_t  Automation_Level;      /* SAE_standard */
} AutomationLevel;

/* size of the serialized version of struct AutomationLevel */
#define AutomationLevel_size 9


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
