
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
  uint32_t UTC_time;         /* MISSING */
  uint32_t apps_active;      /* MISSING */
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
