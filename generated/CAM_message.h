
/*\
  Automatically generated
\*/

#ifndef CAM_MESSAGE_H
#define CAM_MESSAGE_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for CAM_message */
typedef struct {
  uint64_t UTC_time;                                            /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  uint32_t v2x_cam_header_msgID;                                /* messageID_INTEGER{_denm(1),cam(2),_poi(3),_spat(4),_map(5),_ivi(6),_ev-rsr(7)_}_(0..255) */
  uint32_t v2x_cam_header_originationStationID;                 /* Unique_indentifier_for_verhicle_or_RSU */
  uint16_t v2x_cam_GenerationDeltaTime;                         /* Only_seconds_after_start_of_minute_are_transmitted|generationDeltaTime_=_TimestampIts_mod_65_536|TimestampIts_represents_an_integer_value_in_milliseconds_since_2004-01-|01T00:00:00:000Z_as_defined_in_ETSI_TS_102_894-2 */
  uint8_t  v2x_cam_StationType;                                 /* unknown(0),_pedestrian(1),_cyclist(2),_moped(3),_motorcycle(4),_passengerCar(5),_bus(6),_lightTruck(7),_heavyTruck(8),_trailer(9),_specialVehicles(10),_tram(11),_roadSideUnit(15) */
  int32_t  v2x_cam_Latitude;                                    /* Unit_0,1_microdegree._Referred_to_front_bumper_position._Positive:_NORTH._Negative:_SOUTH._Raw_value_set_to_900_000_001_when_unavailable. */
  int32_t  v2x_cam_Longitude;                                   /* Unit_0,1_microdegree.__Referred_to_front_bumper_position._Negative:_WEST._Positive:_EAST._Raw_value_set_to_1_800_000_001_when_unavailable */
  int32_t  v2x_cam_ConfidenceEllipse_semiMajor;                 /* Absolute_position_accuracy_in_one_of_the_axis_direction_as_defined_in_a_shape_of_ellipse_with_a_predefined_confidence_level_(e.g._95_%)|The_value_shall_be_set_to:|•_1_if_the_accuracy_is_equal_to_or_less_than_1_cm,|•_n_(n_>_1_and_n_<_4093)_if_the_accuracy_is_equal_to_or_less_than_n_cm,|•_4093_if_the_accuracy_is_equal_to_or_less_than_4093_cm,|•_4094_if_the_accuracy_is_out_of_range,_i.e._greater_than_4093_cm,|•_4095_if_the_accuracy_information_is_unavailable. */
  int32_t  v2x_cam_ConfidenceEllipse_semiMinor;                 /* Absolute_position_accuracy_in_one_of_the_axis_direction_as_defined_in_a_shape_of_ellipse_with_a_predefined_confidence_level_(e.g._95_%)|The_value_shall_be_set_to:|•_1_if_the_accuracy_is_equal_to_or_less_than_1_cm,|•_n_(n_>_1_and_n_<_4093)_if_the_accuracy_is_equal_to_or_less_than_n_cm,|•_4093_if_the_accuracy_is_equal_to_or_less_than_4093_cm,|•_4094_if_the_accuracy_is_out_of_range,_i.e._greater_than_4093_cm,|•_4095_if_the_accuracy_information_is_unavailable. */
  int32_t  v2x_cam_ConfidenceEllipse_semiMajorOrientation;      /* Orientation_of_a_heading_with_regards_to_the_WGS84_north.|When_the_information_is_not_available,_the_DE_shall_be_set_to_3601. */
  int32_t  v2x_cam_Altitude;                                    /* Unit_0.01_m._Raw_value_set_to_800_001_when_unavailable. */
  uint16_t v2x_cam_Heading;                                     /* Unit_0,1_degree._Raw_value_set_to_3_601_when_unavailable */
  uint16_t v2x_cam_Speed;                                       /* Unit_0,01_m/s_._Speed_not_available_set_16383 */
  uint16_t v2x_cam_VehicleLength;                               /* Unit_0,1_m._Set_to_1_023_if_the_information_in_unavailable. */
  uint8_t  v2x_cam_VehicleWidth;                                /* Unit_0,1_m._Set_to_62_if_the_information_is|unavailable */
  int16_t  v2x_cam_LongitudinalAcceleration;                    /* Unit_0,1__m/s^2._Negative_values_indicate_that_the_vehicle_is_braking._Positive_values_indicate_that_the_vehicle_is_accelerating._Set_to_161_when_unavailable. */
  int16_t  v2x_cam_YawRate;                                     /* Unit_0,01_deg/s._Positive_value:_anti-clockwise._Negative_value:_clockwise._Set_to_32767_when_unavailable. */
  uint8_t  v2x_cam_AccelerationControl;                         /* AccelerationControl_::=_BIT_STRING_{|brakePedalEngaged_(0),|gasPedalEngaged_(1),|emergencyBrakeEngaged_(2),|collisionWarningEngaged_(3),|accEngaged_(4),|cruiseControlEngaged_(5),|speedLimiterEngaged_(6)|}_(SIZE(7)) */
  int16_t  v2x_cam_SteeringWheelAngle;                          /* Unit_1,5_degree.__Positive_value:_anti-clockwise._Negative_value:_clockwise._Not_available:_the_value_shall_be_set_to_512. */
  int16_t  v2x_cam_LateralAcceleration;                         /* Unit_0,1_m/s^2._Negative:_acc._towards_right_side._Positive:_acc._towards_left_side_of_vehicle._Set_to_161_when_unavailable. */
  uint16_t v2x_cam_VehicleRole;                                 /* VehicleRole_::=_ENUMERATED_{default(0),_publicTransport(1),|specialTransport(2),_dangerousGoods(3),_roadWork(4),_rescue(5),|emergency(6),_safetyCar(7),|agriculture(8),commercial(9),military(10),roadOperator(11),taxi(12),|reserved1(13),_reserved2(14),_reserved3(15)} */
  uint8_t  v2x_cam_ExteriorLights_status;                       /* 0_=_RELEASED;_1_=_PRESSED_for_every_light_command.|ExteriorLights_::=_BIT_STRING_{|lowBeamHeadlightsOn_(0),|highBeamHeadlightsOn_(1),|leftTurnSignalOn_(2),|rightTurnSignalOn_(3),|daytimeRunningLightsOn_(4),|reverseLightOn_(5),|fogLightOn_(6),|parkingLightsOn_(7)|}_(SIZE(8)) */
  int32_t  v2x_cam_PathHistory_deltaLatitude[10];               /* DeltaLatitude_::=_INTEGER_{oneMicrodegreeNorth_(10),_oneMicrodegreeSouth(-10),_unavailable(131072)} */
  int32_t  v2x_cam_PathHistory_deltaLongitude[10];              /* DeltaLongitude_::=_INTEGER_{oneMicrodegreeEast_(10),_oneMicrodegreeWest(-10),_unavailable(131072)}_(-131071..131072) */
  int32_t  v2x_cam_PathHistory_deltaAltitude[10];               /* DeltaAltitude_::=_INTEGER_{oneCentimeterUp_(1),_oneCentimeterDown_(-1),|unavailable(12800)}_(-12700..12800) */
} CAM_message;

/* size of the serialized version of struct CAM_message */
#define CAM_message_size  182
#define CAM_message_n_fields 25


/* print CAM_message struct on stdio */
extern
void
buffer_to_CAM_message( uint8_t const buffer[], CAM_message * S );

/* serialize CAM_message struct to buffer */
extern
void
CAM_message_to_buffer( CAM_message const * S, uint8_t buffer[] );

/* get buffer and un-serialize to CAM_message struct */
extern
void
CAM_message_print( CAM_message const * S );

/* build topic for CAM_message struct */
extern
void
CAM_message_MQTT_topic( CAM_message const * S, char topic[], int topic_len );

/* check topic for CAM_message struct */
extern
int
CAM_message_MQTT_compare( char const topic[] );

/* build topic for CAM_message struct */
extern
void
CAM_message_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
