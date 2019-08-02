
/*\
  Automatically generated
\*/

#ifndef MANOUEVRETYPES_H
#define MANOUEVRETYPES_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for ManouevreTypes */
typedef struct {
  uint64_t UTC_time;                     /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  OutputID;                     /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint8_t  FirstManoeuverTypeLong;       /* free_flow(1)_|_follow_object(2)_|_stopping(3)_|_passing(4)_ */
  uint8_t  FirstManoeuverTypeLat;        /* E.g:_lane_keeping(1)__lane_change_left(2)_lane_change_right(3)_turn_left_(4)_turn_right(5) */
  uint8_t  SecondManoeuverTypeLong;      /* free_flow(1)_|_follow_object(2)_|_stopping(3)_|_passing(4)_ */
  uint8_t  SecondManoeuverTypeLat;       /* E.g:_lane_keeping(1)__lane_change_left(2)_lane_change_right(3)_turn_left_(4)_turn_right(5) */
} ManouevreTypes;

/* size of the serialized version of struct ManouevreTypes */
#define ManouevreTypes_size 16


/* print ManouevreTypes struct on stdio */
extern
void
buffer_to_ManouevreTypes( uint8_t const buffer[], ManouevreTypes * S );

/* serialize ManouevreTypes struct to buffer */
extern
void
ManouevreTypes_to_buffer( ManouevreTypes const * S, uint8_t buffer[] );

/* get buffer and un-serialize to ManouevreTypes struct */
extern
void
ManouevreTypes_print( ManouevreTypes const * S );

/* build topic for ManouevreTypes struct */
extern
void
ManouevreTypes_MQTT_topic( ManouevreTypes const * S, char topic[], int topic_len );

/* check topic for ManouevreTypes struct */
extern
int
ManouevreTypes_MQTT_compare( char const topic[] );

/* build topic for ManouevreTypes struct */
extern
void
ManouevreTypes_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
