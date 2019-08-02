
/*\
  Automatically generated
\*/

#ifndef VIRTUALTOLL_H
#define VIRTUALTOLL_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for VirtualToll */
typedef struct {
  uint64_t UTC_time;      /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  OutputID;      /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint32_t StripID;       /* ID_of_the_strip_0=RSB_ */
  uint32_t RSB_ID;        /* Unique_indentifier_for_verhicle_or_RSU */
  uint32_t RFID_ID[3];    /* ID_by_RFID */
} VirtualToll;

/* size of the serialized version of struct VirtualToll */
#define VirtualToll_size 32


/* print VirtualToll struct on stdio */
extern
void
buffer_to_VirtualToll( uint8_t const buffer[], VirtualToll * S );

/* serialize VirtualToll struct to buffer */
extern
void
VirtualToll_to_buffer( VirtualToll const * S, uint8_t buffer[] );

/* get buffer and un-serialize to VirtualToll struct */
extern
void
VirtualToll_print( VirtualToll const * S );

/* build topic for VirtualToll struct */
extern
void
VirtualToll_MQTT_topic( VirtualToll const * S, char topic[], int topic_len );

/* check topic for VirtualToll struct */
extern
int
VirtualToll_MQTT_compare( char const topic[] );

/* build topic for VirtualToll struct */
extern
void
VirtualToll_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
