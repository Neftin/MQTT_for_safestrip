
/*\
  Automatically generated
\*/

#ifndef VIRTUALTOLL_INPUT_H
#define VIRTUALTOLL_INPUT_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for VirtualToll_input */
typedef struct {
  uint64_t UTC_time;                   /* MISSING */
  uint8_t  StationType;                /* MISSING */
  int32_t  position_latitude;          /* MISSING */
  int32_t  position_longitude;         /* MISSING */
  int32_t  virtual_gate_distance;      /* MISSING */
  uint32_t StripID;                    /* MISSING */
  uint32_t RSB_ID;                     /* MISSING */
  uint32_t RFID_ID;                    /* MISSING */
} VirtualToll_input;

/* size of the serialized version of struct VirtualToll_input */
#define VirtualToll_input_size  33
#define VirtualToll_input_n_fields 8


/* print VirtualToll_input struct on stdio */
extern
void
buffer_to_VirtualToll_input( uint8_t const buffer[], VirtualToll_input * S );

/* serialize VirtualToll_input struct to buffer */
extern
void
VirtualToll_input_to_buffer( VirtualToll_input const * S, uint8_t buffer[] );

/* get buffer and un-serialize to VirtualToll_input struct */
extern
void
VirtualToll_input_print( VirtualToll_input const * S );

/* get buffer and un-serialize to VirtualToll_input struct */
extern
void
VirtualToll_input_fileprint( VirtualToll_input const * S , FILE * file_stream );

/* build topic for VirtualToll_input struct */
extern
void
VirtualToll_input_MQTT_topic( VirtualToll_input const * S, char topic[], int topic_len );

/* check topic for VirtualToll_input struct */
extern
int
VirtualToll_input_MQTT_compare( char const topic[] );

/* build topic for VirtualToll_input struct */
extern
void
VirtualToll_input_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
