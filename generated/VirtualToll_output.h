
/*\
  Automatically generated
\*/

#ifndef VIRTUALTOLL_OUTPUT_H
#define VIRTUALTOLL_OUTPUT_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for VirtualToll_output */
typedef struct {
  uint64_t UTC_time;                   /* MISSING */
  uint32_t RFID_ID;                    /* MISSING */
  int32_t  virtual_gate_distance;      /* MISSING */
  uint32_t payment_amount;             /* MISSING */
  uint8_t  payment_confirmation;       /* MISSING */
} VirtualToll_output;

/* size of the serialized version of struct VirtualToll_output */
#define VirtualToll_output_size  21
#define VirtualToll_output_n_fields 5


/* print VirtualToll_output struct on stdio */
extern
void
buffer_to_VirtualToll_output( uint8_t const buffer[], VirtualToll_output * S );

/* serialize VirtualToll_output struct to buffer */
extern
void
VirtualToll_output_to_buffer( VirtualToll_output const * S, uint8_t buffer[] );

/* get buffer and un-serialize to VirtualToll_output struct */
extern
void
VirtualToll_output_print( VirtualToll_output const * S );

/* build topic for VirtualToll_output struct */
extern
void
VirtualToll_output_MQTT_topic( VirtualToll_output const * S, char topic[], int topic_len );

/* check topic for VirtualToll_output struct */
extern
int
VirtualToll_output_MQTT_compare( char const topic[] );

/* build topic for VirtualToll_output struct */
extern
void
VirtualToll_output_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
