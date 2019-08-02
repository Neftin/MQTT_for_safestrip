
/*\
  Automatically generated
\*/

#ifndef VMS_VDS_H
#define VMS_VDS_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for VMS_VDS */
typedef struct {
  uint64_t UTC_time;                               /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  OutputID;                               /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  uint8_t  VMS_traffic_condition;                  /* Cause_cose_=_1,_subcause:_|_0=Unavailable_|_1=Increased_volume_of_traffic_|_2_=_Traffic_jam_slowly_increasing_|_3_=_Traffic_jam_increasing_|_4_=_Traffic_jam_strongly_increasing_|_5_=_Traffic_stationary_|_6_=_Traffic_jam_slightly_decreasing_|_7_=_Traffic_jam_decreasing_|_8_=_Traffic_jam_strongly_decreasing */
  uint8_t  VMS_roadworks;                          /* cause_code_3,_subcause:_|_0=Unavailable|_1=Major_roadwork_|_2=Road_marking_work_|_3=Slow_moving_road_maintenance_|_4=Winter_service_|_5=Street_cleaning */
  uint8_t  VMS_AWC_adhesion;                       /* cause_code=6,_subcause_:_|_0=Unavailable_|_1=Heavy_frost_on_road_|_2=Fuel_on_road_|_3=Mud_on_road_|_4=Snow_on_road_|_5=Ice_on_road_|_6=Black_ice_on_road_|7=Oil_on_road_|_8=Loose_chippings_|_9=Instant_black_ice_|_10=Roads_salted */
  uint8_t  VMS_HL_surface_condition;               /* cause_code=9,_sub_cause:_|_0=Unavailable_|_1=Rock_falls_|_2=Earthquake_damage_|_3=Sewer_collapse_|_4=Subsidence_|_5=Snow_drifts_|_6=Storm_damage_|_7=Burst_pipe_|_8=Volcano_eruption_|_9=Falling_ice */
  uint8_t  VMS_HL_obstacle_on_the_road;            /* cause_code_=_10,_sub_cause_code:_|_0=Unavailable_|_1=Shed_load_|_2=Parts_of_vehicles_|_3=Parts_of_tyres_|_4=Big_objects_|_5=Fallen_trees_|_6=Hub_caps_|_7=Waiting_|_vehicles */
  uint8_t  VMS_AWC_extreme_weather_condition;      /* cause_code_=_17_,_subcause:|_0=Unavailable_|_1=Strong_winds_|_2=Damaging_hail_|_3=Hurricane_|_4=Thunderstorm_|_5=Tornado_|_6=Blizzard_| */
  uint8_t  VMS_AWC_visibility;                     /* cause_code_=_18,_sub_cause:_|_0=Unavailable_|_1=Visibility_reduced_due_to_fog_|_2=Visibility_reduced_due_to_smoke|_3=Visibility_reduced_due_to_heavy_snowfall_|_4=Visibility_reduced_due_to_heavy_rain_|_5=Visibility_reduced_due_to_heavy_hail_|_6=Visibility_reduced_due_to_low_sun_glare_|_7=Visibility_reduced_due_to_sandstorms_|_8=Visibility_reduced_due_to_swarms_of_insects */
  uint8_t  VMS_AWC_precipitation;                  /* cause_code:_19_,_subcause:_|_0=unavailable_|_1=heavy_rain_|_2=heavy_snowfall_|_3=soft_hail_| */
  uint8_t  VMS_stationary_vehicle;                 /* cause_code:_94_,_subcause:_|_0=Unavailable_|_1=Human_Problem_|_2=Vehicle_breakdown_|_3=Post_crash_|_4=Public_transport_stop_|_5=Carrying_dangerous_goods_| */
} VMS_VDS;

/* size of the serialized version of struct VMS_VDS */
#define VMS_VDS_size 21


/* print VMS_VDS struct on stdio */
extern
void
buffer_to_VMS_VDS( uint8_t const buffer[], VMS_VDS * S );

/* serialize VMS_VDS struct to buffer */
extern
void
VMS_VDS_to_buffer( VMS_VDS const * S, uint8_t buffer[] );

/* get buffer and un-serialize to VMS_VDS struct */
extern
void
VMS_VDS_print( VMS_VDS const * S );

/* build topic for VMS_VDS struct */
extern
void
VMS_VDS_MQTT_topic( VMS_VDS const * S, char topic[], int topic_len );

/* check topic for VMS_VDS struct */
extern
int
VMS_VDS_MQTT_compare( char const topic[] );

/* build topic for VMS_VDS struct */
extern
void
VMS_VDS_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
