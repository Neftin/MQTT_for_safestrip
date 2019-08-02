
/*\
  Automatically generated
\*/

#ifndef HMI_INPUTS_H
#define HMI_INPUTS_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for HMI_inputs */
typedef struct {
  uint64_t UTC_time;          /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  uint32_t OutputID;          /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint8_t  WarningLevel;      /* 0_=_system_active_with_no_warning_1_=_warning_level_one_"yellow"_2_=_warning_level_two_"red"_3_=_unavailable */
} HMI_inputs;

/* size of the serialized version of struct HMI_inputs */
#define HMI_inputs_size 13


/* print HMI_inputs struct on stdio */
extern
void
buffer_to_HMI_inputs( uint8_t const buffer[], HMI_inputs * S );

/* serialize HMI_inputs struct to buffer */
extern
void
HMI_inputs_to_buffer( HMI_inputs const * S, uint8_t buffer[] );

/* get buffer and un-serialize to HMI_inputs struct */
extern
void
HMI_inputs_print( HMI_inputs const * S );

/* build topic for HMI_inputs struct */
extern
void
HMI_inputs_MQTT_topic( HMI_inputs const * S, char topic[], int topic_len );

/* check topic for HMI_inputs struct */
extern
int
HMI_inputs_MQTT_compare( char const topic[] );

/* build topic for HMI_inputs struct */
extern
void
HMI_inputs_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
