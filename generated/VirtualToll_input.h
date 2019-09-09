
/*\
  Automatically generated
\*/

#ifndef VIRTUALTOLL_INPUT_H
#define VIRTUALTOLL_INPUT_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for VirtualToll_input */
typedef struct {
  uint64_t UTC_time;                   /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  strip_type;                 /* !!!_To_define */
  int32_t  virtual_gate_distance;      /* distance_of_the_second_strip:_the_toll_gate_is_represented_by_the_second_strip._If_this_strip_is_the_toll_gate,_use_0. */
  uint32_t StripID;                    /* ID_of_the_strip_0=RSB_ */
  uint32_t RSB_ID;                     /* Unique_indentifier_for_verhicle_or_RSU */
  uint32_t RFID_ID[3];                 /* ID_by_RFID */
} VirtualToll_input;

/* size of the serialized version of struct VirtualToll_input */
#define VirtualToll_input_size 36


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
