
/*\
  Automatically generated
\*/

#ifndef HOSTVEHICLE_H
#define HOSTVEHICLE_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for HostVehicle */
typedef struct {
  uint64_t UTC_time;                              /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  double   Speed_vehicle_network;                 /* Filtered_longitudinal_velocity_from__odometer */
  double   LongAcc_vehicle_network;               /* Filtered_longitudinal_acceleration */
  double   LatAcc_vehicle_network;                /* Filtered_lateral_acceleration */
  double   YawRate_vehicle_network;               /* Note_that_yaw-rate_is_the_derivative_of_the_heading,_i.e._chassis_rotation_rate,_not_speed_rotation_rate */
  double   SteerWheel_vehicle_network;            /* Positive_when_the_car_is_turning_left */
  double   SteerWheelSpeed_vehicle_network;       /* Derivative_of_steering_wheel_angle */
  double   BrakePressure_vehicle_network;         /* Used_instead_of_brake_pedal_position */
  double   GasPedPos_vehicle_network;             /* Gas_pedal_position */
  uint8_t  BrakePedalSwitch_vehicle_network;      /* 0_=_UNKNOWN;_1_=_RELEASED;_2_=_PRESSED */
  int32_t  VehicleType;                           /*  */
  double   VehicleBarLongPos;                     /* Distance_to_front_bumper */
} HostVehicle;

/* size of the serialized version of struct HostVehicle */
#define HostVehicle_size  85
#define HostVehicle_n_fields 12


/* print HostVehicle struct on stdio */
extern
void
buffer_to_HostVehicle( uint8_t const buffer[], HostVehicle * S );

/* serialize HostVehicle struct to buffer */
extern
void
HostVehicle_to_buffer( HostVehicle const * S, uint8_t buffer[] );

/* get buffer and un-serialize to HostVehicle struct */
extern
void
HostVehicle_print( HostVehicle const * S );

/* build topic for HostVehicle struct */
extern
void
HostVehicle_MQTT_topic( HostVehicle const * S, char topic[], int topic_len );

/* check topic for HostVehicle struct */
extern
int
HostVehicle_MQTT_compare( char const topic[] );

/* build topic for HostVehicle struct */
extern
void
HostVehicle_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
