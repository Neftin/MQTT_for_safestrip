
/*\
  Automatically generated
\*/

#ifndef MAPEM_MESSAGE_H
#define MAPEM_MESSAGE_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for MAPEM_message */
typedef struct {
  uint64_t UTC_time;                                                        /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  uint32_t v2x_header_msgID;                                                /* messageID_INTEGER{_denm(1),cam(2),_poi(3),_spat(4),_map(5),_ivi(6),_ev-rsr(7)_}_(0..255) */
  uint32_t v2x_header_originationStationID;                                 /* Unique_indentifier_for_verhicle_or_RSU */
  uint8_t  v2x_map_intersection_name;                                       /* IA5String.|Default_value_when_this_filed_is_not_sent:_empty_array_(i.e._all_zero). */
  uint32_t v2x_map_intersection_id;                                         /* The_values_zero_through_255_are_allocated_for_testing_purposes. */
  int32_t  v2x_map_intersection_refLatitude;                                /* Unit_0,1_microdegree._Referred_to_front_bumper_position._Positive:_NORTH._Negative:_SOUTH._Raw_value_set_to_900_000_001_when_unavailable. */
  int32_t  v2x_map_intersection_refLongitude;                               /* Unit_0,1_microdegree.__Referred_to_front_bumper_position._Negative:_WEST._Positive:_EAST._Raw_value_set_to_1_800_000_001_when_unavailable */
  int32_t  v2x_map_intersection_refAltitude;                                /* Elevation_::=_INTEGER_(-4096..61439)|--_In_units_of_10_cm_steps_above_or_below_the_reference_ellipsoid|--_Providing_a_range_of_-409.5_to_+_6143.9_meters|--_The_value_-4096_shall_be_used_when_Unknown_is_to_be_sent|Default_value_when_this_filed_is_not_sent:_61440 */
  int32_t  v2x_map_intersection_laneWidth;                                  /* Default_value_when_this_fieldis_not_set:_32768 */
  uint8_t  v2x_map_intersection_speedLimitType;                             /* SpeedLimitType_::=_ENUMERATED_{|unknown,_--_Speed_limit_type_not_available|maxSpeedInSchoolZone,_--_Only_sent_when_the_limit_is_active|maxSpeedInSchoolZoneWhenChildrenArePresent,_--_Sent_at_any_time|maxSpeedInConstructionZone,_--_Used_for_work_zones,_incident_zones,_etc._where_a_reduced_speed_is_present|vehicleMinSpeed,|vehicleMaxSpeed,_--_Regulatory_speed_limit_for_general_traffic|vehicleNightMaxSpeed,|truckMinSpeed,|truckMaxSpeed,|truckNightMaxSpeed,|vehiclesWithTrailersMinSpeed,|vehiclesWithTrailersMaxSpeed,|vehiclesWithTrailersNightMaxSpeed,|...|}|Default_value_when_this_fieldis_not_set:_13 */
  int32_t  v2x_map_intersection_speedLimitValue;                            /* Velocity_::=_INTEGER_(0..8191)_--_Units_of_0.02_m/s|--_The_value_8191_indicates_that_velocity_is_unavailable||Default_value_when_this_fieldis_not_set:_8192 */
  uint8_t  v2x_map_intersection_LaneSet_ID[16];                             /* LaneID_::=_INTEGER_(0..255)|--_the_value_0_shall_be_used_when_the_lane_ID_is_not_available_or_not_known|--_the_value_255_is_reserved_for_future_use */
  uint8_t  v2x_map_intersection_LaneSet_approach_ID[16];                    /* LaneID_::=_INTEGER_(0..255)_--_the_value_0_shall_be_used_when_the_lane_ID_is_--_not_available_or_not_known_--_the_value_255_is_reserved_for_future_use */
  uint8_t  v2x_map_intersection_LaneSet_laneAttributes_directionalUse[16];  /* LaneDirection_::=_BIT_STRING_{|--_Allowed_directions_of_travel_in_the_lane_object_--_All_lanes_are_described_from_the_stop_line_outwards|ingressPath_(0),_--_travel_from_rear_of_path_to_front_is_allowed|egressPath_(1)_--_travel_from_front_of_path_to_rear__is_allowed_|}_(SIZE_(2)) */
  int32_t  v2x_map_intersection_LaneSet_nodeList_Xoffset[160];              /* - */
  int32_t  v2x_map_intersection_LaneSet_nodeList_Yoffset[160];              /* - */
  uint16_t v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue[16];   /* LaneAttributes-Vehicle_::=_BIT_STRING_{_--_With_bits_as_defined:|isVehicleRevocableLane_(0),|--_this_lane_may_be_activated_or_not_based|--_on_the_current_SPAT_message_contents|--_if_not_asserted,_the_lane_is_ALWAYS_present|isVehicleFlyOverLane_(1),|--_path_of_lane_is_not_at_grade|hovLaneUseOnly_(2),|restrictedToBusUse_(3),|restrictedToTaxiUse_(4),|restrictedFromPublicUse_(5),|hasIRbeaconCoverage_(6),|permissionOnRequest_(7)_--_e.g._to_inform_about_a_lane_for_e-cars|}_(SIZE_(8,...))|OR|LaneAttributes-Crosswalk_::=_BIT_STRING_{_--_With_bits_as_defined:_--_MUTCD_provides_no_suitable_"types"_to_use_here|crosswalkRevocableLane_(0),|--_this_lane_may_be_activated_or_not_based|--_on_the_current_SPAT_message_contents|--_if_not_asserted,_the_lane_is_ALWAYS_present|bicyleUseAllowed_(1),|--_The_path_allows_bicycle_traffic,|--_if_not_set,_this_mode_is_prohibited|isXwalkFlyOverLane_(2),|--_path_of_lane_is_not_at_grade|fixedCycleTime_(3),|--_ped_walk_phases_use_preset_times|--_i.e._there_is_not_a_'push_to_cross'_button|biDirectionalCycleTimes_(4),|--_ped_walk_phases_use_different_SignalGroupID|--_for_each_direction._The_first_SignalGroupID|--_in_the_first_Connection_represents_'inbound'|--_flow_(the_direction_of_travel_towards_the_first|--_node_point)_while_second_SignalGroupID_in_the|--_next_Connection_entry_represents_the_'outbound'|--_flow._And_use_of_RestrictionClassID_entries|--_in_the_Connect_follow_this_same_pattern_in_pairs.|hasPushToWalkButton_(5),|--_Has_a_demand_input|audioSupport_(6),|--_audio_crossing_cues_present|rfSignalRequestPresent_(7),|--_Supports_RF_push_to_wwalk_technologies|unsignalizedSegmentsPresent_(8)|--_The_lane_path_consists_of_one_of_more_segments|--_which_are_not_part_of_a_signal_group_ID|--_Bits_9~15_reserved_and_set_to_zero|}_(SIZE_(16)) */
  uint8_t  v2x_map_intersection_LaneType_ID[16];                            /* bitstring_associated_with_LaneType_(e.g._if_LaneType_is_vehicle(0),_LaneTypeValue_is_defined_as_BIT_STRING_{_--_With_bits_as_defined:|isVehicleRevocableLane_(0),|--_this_lane_may_be_activated_or_not_based|--_on_the_current_SPAT_message_contents|--if_not_asserted,_the_lane_is_ALWAYS_present|isVehicleFlyOverLane_(1),|--_path_of_lane_is_not_at_grade|hovLaneUseOnly_(2),|restrictedToBusUse_(3),|restrictedToTaxiUse_(4),|restrictedFromPublicUse_(5),|hasIRbeaconCoverage_(6),|permissionOnRequest_(7)}) */
  uint16_t v2x_map_intersection_ConnectingLane_allowedManeuvers[96];        /* AllowedManeuvers_::=_BIT_STRING_{|--_With_bits_as_defined:|--_Allowed_maneuvers_at_path_end_(stop_line)|--_All_maneuvers_with_bits_not_set_are_therefore_prohibited_!|--_A_value_of_zero_shall_be_used_for_unknown,_indicating_no_Maneuver|maneuverStraightAllowed_(0),|--_a_Straight_movement_is_allowed_in_this_lane|maneuverLeftAllowed_(1),|--_a_Left_Turn_movement_is_allowed_in_this_lane|maneuverRightAllowed_(2),|--_a_Right_Turn_movement_is_allowed_in_this_lane|maneuverUTurnAllowed_(3),|--_a_U_turn_movement_is_allowed_in_this_lane|maneuverLeftTurnOnRedAllowed_(4),|--_a_Stop,_and_then_proceed_when_safe_movement|--_is_allowed_in_this_lane|maneuverRightTurnOnRedAllowed_(5),|--_a_Stop,_and_then_proceed_when_safe_movement|--_is_allowed_in_this_lane|maneuverLaneChangeAllowed_(6),|--_a_movement_which_changes_to_an_outer_lane|--_on_the_egress_side_is_allowed_in_this_lane|--_(example:_left_into_either_outbound_lane)|maneuverNoStoppingAllowed_(7),|--_the_vehicle_should_not_stop_at_the_stop_line|--_(example:_a_flashing_green_arrow)|yieldAllwaysRequired_(8),|--_the_allowed_movements_above_are_not_protected|--_(example:_an_permanent_yellow_condition)|goWithHalt_(9),|--_after_making_a_full_stop,_may_proceed|caution_(10),|--_proceed_past_stop_line_with_caution|reserved1_(11)|--_used_to_align_to_12_Bit_Field|}_(SIZE(12))|Default_value_when_the_data_element_is_not_available:_4096 */
  uint8_t  v2x_map_intersection_LaneSet_connectingLaneID[96];               /* LaneID_::=_INTEGER_(0..255)_--_the_value_0_shall_be_used_when_the_lane_ID_is_--_not_available_or_not_known_--_the_value_255_is_reserved_for_future_use */
  uint8_t  v2x_map_intersection_LaneSet_connectingLaneSignalGroup[96];      /* SignalGroupID_::=_INTEGER_(0..255)|--_The_value_0_shall_be_used_when_the_ID_is_not_available_or_not_known|--_the_value_255_is_reserved_to_indicate_a_permanent_green_movement_state|--_therefore_a_simple_8_phase_signal_controller_device_might_use_1..9_as_its_groupIDs */
} MAPEM_message;

/* size of the serialized version of struct MAPEM_message */
#define MAPEM_message_size 1802


/* print MAPEM_message struct on stdio */
extern
void
buffer_to_MAPEM_message( uint8_t const buffer[], MAPEM_message * S );

/* serialize MAPEM_message struct to buffer */
extern
void
MAPEM_message_to_buffer( MAPEM_message const * S, uint8_t buffer[] );

/* get buffer and un-serialize to MAPEM_message struct */
extern
void
MAPEM_message_print( MAPEM_message const * S );

/* build topic for MAPEM_message struct */
extern
void
MAPEM_message_MQTT_topic( MAPEM_message const * S, char topic[], int topic_len );

/* check topic for MAPEM_message struct */
extern
int
MAPEM_message_MQTT_compare( char const topic[] );

/* build topic for MAPEM_message struct */
extern
void
MAPEM_message_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
