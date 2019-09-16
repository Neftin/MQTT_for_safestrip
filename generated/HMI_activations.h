
/*\
  Automatically generated
\*/

#ifndef HMI_ACTIVATIONS_H
#define HMI_ACTIVATIONS_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for HMI_activations */
typedef struct {
  uint32_t UTC_time;         /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint32_t apps_active;      /* bit_(from_LSB_as_0th_bit)_0_=_VRU_Cooperative_Safety_App_|_1_=_Merging_Support_|_2_=_Rail_Crossing_and_Roadworks_|_3_=_Personalized_VMS_|_4_=_Virtual_Toll_|_5_=_ParkingBooking */
} HMI_activations;

/* size of the serialized version of struct HMI_activations */
#define HMI_activations_size  8
#define HMI_activations_n_fields 2


/* print HMI_activations struct on stdio */
extern
void
buffer_to_HMI_activations( uint8_t const buffer[], HMI_activations * S );

/* serialize HMI_activations struct to buffer */
extern
void
HMI_activations_to_buffer( HMI_activations const * S, uint8_t buffer[] );

/* get buffer and un-serialize to HMI_activations struct */
extern
void
HMI_activations_print( HMI_activations const * S );

/* build topic for HMI_activations struct */
extern
void
HMI_activations_MQTT_topic( HMI_activations const * S, char topic[], int topic_len );

/* check topic for HMI_activations struct */
extern
int
HMI_activations_MQTT_compare( char const topic[] );

/* build topic for HMI_activations struct */
extern
void
HMI_activations_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
