
/*\
  Automatically generated
\*/

#ifndef OBSTACLEINTERACTIONDATA_H
#define OBSTACLEINTERACTIONDATA_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for ObstacleInteractionData */
typedef struct {
  uint64_t UTC_time;                   /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  OutputID;                   /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint8_t  WarningLevel;               /* 0_=_system_active_with_no_warning_1_=_warning_level_one_"yellow"_2_=_warning_level_two_"red"_3_=_unavailable */
  int32_t  TargetIDf;                  /* ID_of_the_target_assigned_by_the_codriver */
  int32_t  TargetClassf;               /* 0_=_UNCLASSIFIED|1_=_UNKNOWN_SMALL|2_=_UNKNOWN_BIG|3_=_PEDESTRIAN_(VRU)|4_=_BIKE_OR_MOTORBIKE|5_=_CAR|6_=_TRUCK_OR_BUS_|7=_ROADWORKS_|8=_WRONG_WAY_DRIVING_|9=_TRAIN_APPROCHING_LEVEL_CROSSING_|_10_=_low_friction_area */
  uint8_t  TargetComingDirection;      /* If_the_danger_comes_from_a_moving_object_(cars_or_trains)_indicates_the_direction_of_the_lane_from_which_it_si_coming_,_front_and_behind_indicates_parallel_lanes._|_1_=_left_|_2_=_right_|_3_=_front_|_4_=_behind_|_5_=_front_left_|_6_=_front_right_|_7_=_behind_left_|_8_=_behind_right._|_9_=_static_|_10_=_multiple_directions_(intersection) */
  double   TargetXf;                   /* In_the_host_Reference_Frame */
  double   TargetYf;                   /* In_the_host_Reference_Frame */
  double   TargetDistancef;            /* Distance_to_intersection_or_danger_object_obtained_from_absolute_positions_of_vehicle_and_target */
  double   TargetLengthf;              /*  */
  double   TargetWidthf;               /*  */
  double   TargetSpeedf;               /* 0_means_stationary */
  double   time_slots[4];              /* two_slots_max:_t0>t1__t2>t3_second_slot._Refererred_to_the_current_time_(only_for_intersection) */
} ObstacleInteractionData;

/* size of the serialized version of struct ObstacleInteractionData */
#define ObstacleInteractionData_size 102


/* print ObstacleInteractionData struct on stdio */
extern
void
buffer_to_ObstacleInteractionData( uint8_t const buffer[], ObstacleInteractionData * S );

/* serialize ObstacleInteractionData struct to buffer */
extern
void
ObstacleInteractionData_to_buffer( ObstacleInteractionData const * S, uint8_t buffer[] );

/* get buffer and un-serialize to ObstacleInteractionData struct */
extern
void
ObstacleInteractionData_print( ObstacleInteractionData const * S );

/* build topic for ObstacleInteractionData struct */
extern
void
ObstacleInteractionData_MQTT_topic( ObstacleInteractionData const * S, char topic[], int topic_len );

/* check topic for ObstacleInteractionData struct */
extern
int
ObstacleInteractionData_MQTT_compare( char const topic[] );

/* build topic for ObstacleInteractionData struct */
extern
void
ObstacleInteractionData_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
