
/*\
  Automatically generated
\*/

#ifndef HMIINPUTSBYAPP_ACTIVE_H
#define HMIINPUTSBYAPP_ACTIVE_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for HMIinputsByApp_active */
typedef struct {
  uint64_t UTC_time;                   /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  uint32_t OutputID;                   /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint32_t StationID;                  /* ID_coming_from_RFID_ID_or_self-knowledge */
  uint8_t  WarningLevel;               /* 0_=_system_active_with_no_warning_1_=_warning_level_one_"yellow"_2_=_warning_level_two_"red"_3_=_unavailable */
  double   J0f;                        /* Time_derivative_of_acceleration_of_the_safest_manoeuvre */
  double   TargetDistancef;            /* Distance_to_intersection_or_danger_object_obtained_from_absolute_positions_of_vehicle_and_target */
  double   TargetSpeedf;               /* 0_means_stop */
  int32_t  TargetClassf;               /* 0_=_UNCLASSIFIED|1_=_UNKNOWN_SMALL|2_=_UNKNOWN_BIG|3_=_PEDESTRIAN_(VRU)|4_=_BIKE_OR_MOTORBIKE|5_=_CAR|6_=_TRUCK_OR_BUS_|7=_ROADWORKS_|8=_WRONG_WAY_DRIVING_|9=_TRAIN_APPROCHING_LEVEL_CROSSING_|_10_=_low_friction_area_|_12_heavy_traffic_|_13_=_low_visibility_|_14_=_wet_road_|_VMS_traffic_condition_101_=Increased_volume_of_traffic_|_102_=_Traffic_jam_slowly_increasing_|_103_=_Traffic_jam_increasing_|_104_=_Traffic_jam_strongly_increasing_|_105_=_Traffic_stationary_|_106_=_Traffic_jam_slightly_decreasing_|_107_=_Traffic_jam_decreasing_|_108_=_Traffic_jam_strongly_decreasing_|_VMS_extreme_weather_copnditions_|_171=Strong_winds_|_172=Damaging_hail_|_173=Hurricane_|_174=Thunderstorm_|_175=Tornado_|_176=Blizzard_|_VMS_visibility_weather_181=Visibility_reduced_due_to_fog_|_182=Visibility_reduced_due_to_smoke|_183=Visibility_reduced_due_to_heavy_snowfall_|_184=Visibility_reduced_due_to_heavy_rain_|_185=Visibility_reduced_due_to_heavy_hail_|_186=Visibility_reduced_due_to_low_sun_glare_|_187=Visibility_reduced_due_to_sandstorms_|_8=Visibility_reduced_due_to_swarms_of_insects */
  uint8_t  TargetComingDirection;      /* If_the_danger_comes_from_a_moving_object_(cars_or_trains)_indicates_the_direction_of_the_lane_from_which_it_si_coming_,_front_and_behind_indicates_parallel_lanes._|_1_=_left_|_2_=_right_|_3_=_front_|_4_=_behind_|_5_=_front_left_|_6_=_front_right_|_7_=_behind_left_|_8_=_behind_right._|_9_=_static_|_10_=_multiple_directions_(intersection) */
} HMIinputsByApp_active;

/* size of the serialized version of struct HMIinputsByApp_active */
#define HMIinputsByApp_active_size 46


/* print HMIinputsByApp_active struct on stdio */
extern
void
buffer_to_HMIinputsByApp_active( uint8_t const buffer[], HMIinputsByApp_active * S );

/* serialize HMIinputsByApp_active struct to buffer */
extern
void
HMIinputsByApp_active_to_buffer( HMIinputsByApp_active const * S, uint8_t buffer[] );

/* get buffer and un-serialize to HMIinputsByApp_active struct */
extern
void
HMIinputsByApp_active_print( HMIinputsByApp_active const * S );

/* build topic for HMIinputsByApp_active struct */
extern
void
HMIinputsByApp_active_MQTT_topic( HMIinputsByApp_active const * S, char topic[], int topic_len );

/* check topic for HMIinputsByApp_active struct */
extern
int
HMIinputsByApp_active_MQTT_compare( char const topic[] );

/* build topic for HMIinputsByApp_active struct */
extern
void
HMIinputsByApp_active_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
