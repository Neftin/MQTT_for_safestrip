
/*\
  Automatically generated
\*/

#ifndef STRIP_CAM_H
#define STRIP_CAM_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for Strip_CAM */
typedef struct {
  uint64_t UTC_time;                                    /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  uint32_t originationStationID;                        /* Unique_indentifier_for_RSU */
  uint32_t StripID;                                     /* ID_of_the_strip */
  uint32_t RFID_ID;                                     /* Unique_indentifier_for_verhicle */
  uint8_t  StationType;                                 /* unknown(0),_pedestrian(1),_cyclist(2),_moped(3),_motorcycle(4),_passengerCar(5),_bus(6),_lightTruck(7),_heavyTruck(8),_trailer(9),_specialVehicles(10),_tram(11),_roadSideUnit(15) */
  int32_t  Latitude;                                    /* Unit_0,1_microdegree._Referred_to_front_bumper_position._Positive:_NORTH._Negative:_SOUTH._Raw_value_set_to_900_000_001_when_unavailable. */
  int32_t  Longitude;                                   /* Unit_0,1_microdegree.__Referred_to_front_bumper_position._Negative:_WEST._Positive:_EAST._Raw_value_set_to_1_800_000_001_when_unavailable */
  int32_t  ConfidenceEllipse_semiMajor;                 /* Absolute_position_accuracy_in_one_of_the_axis_direction_as_defined_in_a_shape_of_ellipse_with_a_predefined_confidence_level_(e.g._95_%)|The_value_shall_be_set_to:|•_1_if_the_accuracy_is_equal_to_or_less_than_1_cm,|•_n_(n_>_1_and_n_<_4093)_if_the_accuracy_is_equal_to_or_less_than_n_cm,|•_4093_if_the_accuracy_is_equal_to_or_less_than_4093_cm,|•_4094_if_the_accuracy_is_out_of_range,_i.e._greater_than_4093_cm,|•_4095_if_the_accuracy_information_is_unavailable. */
  int32_t  ConfidenceEllipse_semiMinor;                 /* Absolute_position_accuracy_in_one_of_the_axis_direction_as_defined_in_a_shape_of_ellipse_with_a_predefined_confidence_level_(e.g._95_%)|The_value_shall_be_set_to:|•_1_if_the_accuracy_is_equal_to_or_less_than_1_cm,|•_n_(n_>_1_and_n_<_4093)_if_the_accuracy_is_equal_to_or_less_than_n_cm,|•_4093_if_the_accuracy_is_equal_to_or_less_than_4093_cm,|•_4094_if_the_accuracy_is_out_of_range,_i.e._greater_than_4093_cm,|•_4095_if_the_accuracy_information_is_unavailable. */
  int32_t  ConfidenceEllipse_semiMajorOrientation;      /* Orientation_of_a_heading_with_regards_to_the_WGS84_north.|When_the_information_is_not_available,_the_DE_shall_be_set_to_3601. */
  int32_t  Altitude;                                    /* Unit_0.01_m._Raw_value_set_to_800_001_when_unavailable. */
  uint16_t Heading;                                     /* Unit_0,1_degree._Raw_value_set_to_3_601_when_unavailable */
  uint16_t Speed;                                       /* Unit_0,01_m/s_._Speed_not_available_set_16383 */
  uint16_t VehicleLength;                               /* Unit_0,1_m._Set_to_1_023_if_the_information_in_unavailable. */
  uint8_t  VehicleWidth;                                /* Unit_0,1_m._Set_to_62_if_the_information_is|unavailable */
  int32_t  LongitudinalAcceleration;                    /* Unit_0,1__m/s^2._Negative_values_indicate_that_the_vehicle_is_braking._Positive_values_indicate_that_the_vehicle_is_accelerating._Set_to_161_when_unavailable. */
  uint8_t  Lane_ID;                                     /* This_number_depends_on_the_lanes_coded_in_the_intersection,_refer_to_the_map_ */
} Strip_CAM;

/* size of the serialized version of struct Strip_CAM */
#define Strip_CAM_size  57
#define Strip_CAM_n_fields 17


/* print Strip_CAM struct on stdio */
extern
void
buffer_to_Strip_CAM( uint8_t const buffer[], Strip_CAM * S );

/* serialize Strip_CAM struct to buffer */
extern
void
Strip_CAM_to_buffer( Strip_CAM const * S, uint8_t buffer[] );

/* get buffer and un-serialize to Strip_CAM struct */
extern
void
Strip_CAM_print( Strip_CAM const * S );

/* build topic for Strip_CAM struct */
extern
void
Strip_CAM_MQTT_topic( Strip_CAM const * S, char topic[], int topic_len );

/* check topic for Strip_CAM struct */
extern
int
Strip_CAM_MQTT_compare( char const topic[] );

/* build topic for Strip_CAM struct */
extern
void
Strip_CAM_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
