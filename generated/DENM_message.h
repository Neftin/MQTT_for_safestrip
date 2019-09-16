
/*\
  Automatically generated
\*/

#ifndef DENM_MESSAGE_H
#define DENM_MESSAGE_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for DENM_message */
typedef struct {
  uint64_t UTC_time;                                             /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  v2x_header_StationID;                                 /* Identifier_of_the_vehicle_(from_RFID_or_other_identification) */
  int32_t  v2x_header_originationStationID;                      /* Unique_indentifier_for_verhicle_or_RSU */
  uint16_t v2x_denm_sequenceNumber;                              /*  */
  uint64_t v2x_denm_detectionTime;                               /* The_value_for_TimestampIts_for_2007-01-01T00:00:00.000Z_is_94_694_401_000_milliseconds,_which_includes_one_leap_second_insertion_since_2004-01-01T00:00:00.000Z.|TimestampIts_::=_INTEGER_{utcStartOf2004(0),_oneMillisecAfterUTCStartOf2004(1)} */
  int32_t  v2x_denm_eventPosition_latitude;                      /* Unit_0,1_microdegree._Referred_to_front_bumper_position._Positive:_NORTH._Negative:_SOUTH._Raw_value_set_to_900_000_001_when_unavailable. */
  int32_t  v2x_denm_eventPosition_longitude;                     /* Unit_0,1_microdegree.__Referred_to_front_bumper_position._Negative:_WEST._Positive:_EAST._Raw_value_set_to_1_800_000_001_when_unavailable */
  int32_t  v2x_denm_ConfidenceEllipse_semiMajor;                 /* Absolute_position_accuracy_in_one_of_the_axis_direction_as_defined_in_a_shape_of_ellipse_with_a_predefined_confidence_level_(e.g._95_%)|The_value_shall_be_set_to:|•_1_if_the_accuracy_is_equal_to_or_less_than_1_cm,|•_n_(n_>_1_and_n_<_4093)_if_the_accuracy_is_equal_to_or_less_than_n_cm,|•_4093_if_the_accuracy_is_equal_to_or_less_than_4093_cm,|•_4094_if_the_accuracy_is_out_of_range,_i.e._greater_than_4093_cm,|•_4095_if_the_accuracy_information_is_unavailable. */
  int32_t  v2x_denm_ConfidenceEllipse_semiMinor;                 /* Absolute_position_accuracy_in_one_of_the_axis_direction_as_defined_in_a_shape_of_ellipse_with_a_predefined_confidence_level_(e.g._95_%)|The_value_shall_be_set_to:|•_1_if_the_accuracy_is_equal_to_or_less_than_1_cm,|•_n_(n_>_1_and_n_<_4093)_if_the_accuracy_is_equal_to_or_less_than_n_cm,|•_4093_if_the_accuracy_is_equal_to_or_less_than_4093_cm,|•_4094_if_the_accuracy_is_out_of_range,_i.e._greater_than_4093_cm,|•_4095_if_the_accuracy_information_is_unavailable. */
  int32_t  v2x_denm_ConfidenceEllipse_semiMajorOrientation;      /* Orientation_of_a_heading_with_regards_to_the_WGS84_north.|When_the_information_is_not_available,_the_DE_shall_be_set_to_3601. */
  int32_t  v2x_denm_eventPosition_altitude;                      /* Unit_0.01_m._Raw_value_set_to_800_001_when_unavailable. */
  uint8_t  v2x_denm_relevanceDistance;                           /* RelevanceDistance_::=_ENUMERATED_{lessThan50m(0),_lessThan100m(1),_lessThan200m(2),_lessThan500m(3),lessThan1000m(4),_lessThan5km(5),_lessThan10km(6),_over10km(7)}_ */
  uint8_t  v2x_denm_relevanceTrafficDirection;                   /* RelevanceTrafficDirection_::=_ENUMERATED_{allTrafficDirections(0),|upstreamTraffic(1),_downstreamTraffic(2),_oppositeTraffic(3)} */
  int32_t  v2x_denm_validityDuration;                            /* ValidityDuration_::=_INTEGER_{timeOfDetection(0),_oneSecondAfterDetection(1)} */
  uint8_t  v2x_denm_stationType;                                 /* StationType_::=_INTEGER_{unknown(0),_pedestrian(1),_cyclist(2),_moped(3),_motorcycle(4),_passengerCar(5),_bus(6),_lightTruck(7),_heavyTruck(8),_trailer(9),_specialVehicles(10),_tram(11),_roadSideUnit(15)} */
  int32_t  v2x_denm_eventType_CauseCode;                         /* trafficCondition_(1),_|_accident_(2),_|_roadworks_(3),_|_adverseWeatherCondition-Adhesion_(6),_hazardousLocation-SurfaceCondition_(9),_humanPresenceOnTheRoad_(12),_|_wrongWayDriving_(14),_adverseWeatherCondition-ExtremeWeatherCondition_(17),_adverseWeatherCondition-Visibility_(18),_adverseWeatherCondition-Precipitation_(19)_|_collisionRisk_(97),_|_signalViolation_(98),_|_dangerousSituation_(99)_|_100_=_Augmented_positioning */
  int32_t  v2x_denm_eventType_SubCauseCode;                      /* SAFE_STRIP_relevant_:_(see_v2x_denm_eventType_CauseCode)SubCauseCode_example:__collisionRisk_SubCauseCode:_Cunavailable(0),_longitudinalCollisionRisk(1),_crossingCollisionRisk(2),_lateralCollisionRisk(3),_vulnerableRoadUser(4) */
  uint16_t v2x_denm_frictionCoefficient_value;                   /* Value_of_the_friction_coefficient_estimated_(CUSTOM)_65535_=_unavailable */
  uint16_t v2x_denm_frictionCoefficient_confidence;              /* Confidence_of_the_value_of_the_friction_coefficient_(CUSTOM)_65535_=_unavailable */
  int32_t  v2x_denm_EventHistory_deltaLatitude[10];              /* DeltaLatitude_::=_INTEGER_{oneMicrodegreeNorth_(10),_oneMicrodegreeSouth(-10),_unavailable(131072)}_used_ */
  int32_t  v2x_denm_EventHistory_deltaLongitude[10];             /* DeltaLongitude_::=_INTEGER_{oneMicrodegreeEast_(10),_oneMicrodegreeWest(-10),_unavailable(131072)}_(-131071..131072) */
  int32_t  v2x_denm_EventHistory_deltaAltitude[10];              /* DeltaAltitude_::=_INTEGER_{oneCentimeterUp_(1),_oneCentimeterDown_(-1),|unavailable(12800)}_(-12700..12800) */
  int32_t  v2x_denm_alacarte_LanePosition;                       /* lateral_position_in_the_lane_in_centimeters */
} DENM_message;

/* size of the serialized version of struct DENM_message */
#define DENM_message_size  193
#define DENM_message_n_fields 23


/* print DENM_message struct on stdio */
extern
void
buffer_to_DENM_message( uint8_t const buffer[], DENM_message * S );

/* serialize DENM_message struct to buffer */
extern
void
DENM_message_to_buffer( DENM_message const * S, uint8_t buffer[] );

/* get buffer and un-serialize to DENM_message struct */
extern
void
DENM_message_print( DENM_message const * S );

/* build topic for DENM_message struct */
extern
void
DENM_message_MQTT_topic( DENM_message const * S, char topic[], int topic_len );

/* check topic for DENM_message struct */
extern
int
DENM_message_MQTT_compare( char const topic[] );

/* build topic for DENM_message struct */
extern
void
DENM_message_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
