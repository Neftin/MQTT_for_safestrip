
/*\
  Automatically generated
\*/

#ifndef PARKINGSTATUS_H
#define PARKINGSTATUS_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for ParkingStatus */
typedef struct {
  uint64_t UTC_time;                     /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  OutputID;                     /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint32_t IDs_free_patkings[10];        /* ID_of_the_strips_associated_to_the_free_parking_slots */
  uint32_t Number_of_free_parkings;      /* Number_of_the_free_parking_slots */
} ParkingStatus;

/* size of the serialized version of struct ParkingStatus */
#define ParkingStatus_size 56


/* print ParkingStatus struct on stdio */
extern
void
buffer_to_ParkingStatus( uint8_t const buffer[], ParkingStatus * S );

/* serialize ParkingStatus struct to buffer */
extern
void
ParkingStatus_to_buffer( ParkingStatus const * S, uint8_t buffer[] );

/* get buffer and un-serialize to ParkingStatus struct */
extern
void
ParkingStatus_print( ParkingStatus const * S );

/* build topic for ParkingStatus struct */
extern
void
ParkingStatus_MQTT_topic( ParkingStatus const * S, char topic[], int topic_len );

/* check topic for ParkingStatus struct */
extern
int
ParkingStatus_MQTT_compare( char const topic[] );

/* build topic for ParkingStatus struct */
extern
void
ParkingStatus_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
