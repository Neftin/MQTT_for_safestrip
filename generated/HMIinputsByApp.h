
/*\
  Automatically generated
\*/

#ifndef HMIINPUTSBYAPP_H
#define HMIINPUTSBYAPP_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for HMIinputsByApp */
typedef struct {
  uint64_t UTC_time;                   /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  uint32_t OutputID;                   /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint8_t  WarningLevel;               /* 0_=_system_active_with_no_warning_1_=_warning_level_one_"yellow"_2_=_warning_level_two_"red"_3_=_unavailable */
  double   J0f;                        /* Time_derivative_of_acceleration_of_the_safest_manoeuvre */
  double   TargetDistancef;            /* Distance_to_intersection_or_danger_object_obtained_from_absolute_positions_of_vehicle_and_target */
  double   TargetSpeedf;               /* 0_means_stop */
  int32_t  TargetClassf;               /* 0_=_UNCLASSIFIED|1_=_UNKNOWN_SMALL|2_=_UNKNOWN_BIG|3_=_PEDESTRIAN_(VRU)|4_=_BIKE_OR_MOTORBIKE|5_=_CAR|6_=_TRUCK_OR_BUS_|7=_ROADWORKS_|8=_WRONG_WAY_DRIVING_|9=_TRAIN_APPROCHING_LEVEL_CROSSING_|_10_=_low_friction_area */
  uint8_t  TargetComingDirection;      /* If_the_danger_comes_from_a_moving_object_(cars_or_trains)_indicates_the_direction_of_the_lane_from_which_it_si_coming_,_front_and_behind_indicates_parallel_lanes._|_1_=_left_|_2_=_right_|_3_=_front_|_4_=_behind_|_5_=_front_left_|_6_=_front_right_|_7_=_behind_left_|_8_=_behind_right._|_9_=_static_|_10_=_multiple_directions_(intersection) */
} HMIinputsByApp;

/* size of the serialized version of struct HMIinputsByApp */
#define HMIinputsByApp_size 42


/* print HMIinputsByApp struct on stdio */
extern
void
buffer_to_HMIinputsByApp( uint8_t const buffer[], HMIinputsByApp * S );

/* serialize HMIinputsByApp struct to buffer */
extern
void
HMIinputsByApp_to_buffer( HMIinputsByApp const * S, uint8_t buffer[] );

/* get buffer and un-serialize to HMIinputsByApp struct */
extern
void
HMIinputsByApp_print( HMIinputsByApp const * S );

/* build topic for HMIinputsByApp struct */
extern
void
HMIinputsByApp_MQTT_topic( HMIinputsByApp const * S, char topic[], int topic_len );

/* check topic for HMIinputsByApp struct */
extern
int
HMIinputsByApp_MQTT_compare( char const topic[] );

/* build topic for HMIinputsByApp struct */
extern
void
HMIinputsByApp_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
