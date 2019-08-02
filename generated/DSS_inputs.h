
/*\
  Automatically generated
\*/

#ifndef DSS_INPUTS_H
#define DSS_INPUTS_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for DSS_inputs */
typedef struct {
  uint64_t UTC_time;          /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  uint32_t OutputID;          /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint8_t  WarningLevel;      /* 0_=_system_active_with_no_warning_1_=_warning_level_one_"yellow"_2_=_warning_level_two_"red"_3_=_unavailable */
} DSS_inputs;

/* size of the serialized version of struct DSS_inputs */
#define DSS_inputs_size 13


/* print DSS_inputs struct on stdio */
extern
void
buffer_to_DSS_inputs( uint8_t const buffer[], DSS_inputs * S );

/* serialize DSS_inputs struct to buffer */
extern
void
DSS_inputs_to_buffer( DSS_inputs const * S, uint8_t buffer[] );

/* get buffer and un-serialize to DSS_inputs struct */
extern
void
DSS_inputs_print( DSS_inputs const * S );

/* build topic for DSS_inputs struct */
extern
void
DSS_inputs_MQTT_topic( DSS_inputs const * S, char topic[], int topic_len );

/* check topic for DSS_inputs struct */
extern
int
DSS_inputs_MQTT_compare( char const topic[] );

/* build topic for DSS_inputs struct */
extern
void
DSS_inputs_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
