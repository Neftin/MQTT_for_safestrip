
/*\
  Automatically generated
\*/

#ifndef PARKINGOUTPUT_H
#define PARKINGOUTPUT_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for ParkingOutput */
typedef struct {
  uint64_t UTC_time;                        /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  OutputID;                        /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint32_t RFID_ID;                         /* ID_by_RFID */
  uint32_t Payment_Amount;                  /* 0_if_no_parking_|_amount_in_cents_(100_=_1_€) */
  uint32_t Payment_and_parking_status;      /* 0_=_not_on_parking_|_1_=_parking_started_|_2_=_waiting_for_payment_|_3_=_payment_confiormed */
} ParkingOutput;

/* size of the serialized version of struct ParkingOutput */
#define ParkingOutput_size  24
#define ParkingOutput_n_fields 5


/* print ParkingOutput struct on stdio */
extern
void
buffer_to_ParkingOutput( uint8_t const buffer[], ParkingOutput * S );

/* serialize ParkingOutput struct to buffer */
extern
void
ParkingOutput_to_buffer( ParkingOutput const * S, uint8_t buffer[] );

/* get buffer and un-serialize to ParkingOutput struct */
extern
void
ParkingOutput_print( ParkingOutput const * S );

/* build topic for ParkingOutput struct */
extern
void
ParkingOutput_MQTT_topic( ParkingOutput const * S, char topic[], int topic_len );

/* check topic for ParkingOutput struct */
extern
int
ParkingOutput_MQTT_compare( char const topic[] );

/* build topic for ParkingOutput struct */
extern
void
ParkingOutput_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
