
/*\
  Automatically generated
\*/

#ifndef PARKINGAPPLICATION_H
#define PARKINGAPPLICATION_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for ParkingApplication */
typedef struct {
  uint64_t UTC_time;                          /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  OutputID;                          /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint32_t StripID;                           /* ID_of_the_strip */
  uint8_t  Event_vehicle_pass_direction;      /* 0_=_no_vehicle_passing_,_1_=_entering_,_2=_exiting_park_slot_,_3=_direction_unclear_,_4_=_sensor_fault_ */
} ParkingApplication;

/* size of the serialized version of struct ParkingApplication */
#define ParkingApplication_size 17


/* print ParkingApplication struct on stdio */
extern
void
buffer_to_ParkingApplication( uint8_t const buffer[], ParkingApplication * S );

/* serialize ParkingApplication struct to buffer */
extern
void
ParkingApplication_to_buffer( ParkingApplication const * S, uint8_t buffer[] );

/* get buffer and un-serialize to ParkingApplication struct */
extern
void
ParkingApplication_print( ParkingApplication const * S );

/* build topic for ParkingApplication struct */
extern
void
ParkingApplication_MQTT_topic( ParkingApplication const * S, char topic[], int topic_len );

/* check topic for ParkingApplication struct */
extern
int
ParkingApplication_MQTT_compare( char const topic[] );

/* build topic for ParkingApplication struct */
extern
void
ParkingApplication_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
