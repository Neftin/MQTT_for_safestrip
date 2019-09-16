
/*\
  Automatically generated
\*/

#ifndef FIRSTTRAJECTORYMOTORPRIMITIVESPARAMETERS_H
#define FIRSTTRAJECTORYMOTORPRIMITIVESPARAMETERS_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for FirstTrajectoryMotorPrimitivesParameters */
typedef struct {
  uint64_t UTC_time;       /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  int32_t  OutputID;       /* 1_=_VRU_Cooperative_Safety_App_|_2_=_Merging_Support_|_3_=_Rail_Crossing_and_Roadworks_|_4_=_Personalized_VMS_|_5_=_Virtual_Toll_|_6_=_ParkingBooking */
  double   T0;             /* Absolute_time_when_motion_described_by_motor_primitives_starts._Unix_epoch. */
  double   V0;             /* Longitudinal_speed_at_the_time_of_generation_of_thge_motor_primitive */
  double   A0;             /* Time_derivative_of_speed,_also_valid_for_second_trajectory */
  double   T1f;            /*  */
  double   J0f;            /* Time_derivative_of_acceleration */
  double   S0f;            /* Time_derivative_of_jerk */
  double   Cr0f;           /* Time_derivative_of_snap */
  double   T2f;            /*  */
  double   J1f;            /* Time_derivative_of_acceleration */
  double   S1f;            /* Time_derivative_of_jerk */
  double   Cr1f;           /* Time_derivative_of_snap */
  double   Sn0;            /* Also_valid_for_second_trajectory */
  double   Alpha0;         /* Also_valid_for_second_trajectory */
  double   Delta0;         /* Curvature_of_vehicle_trajectory_relative_to_lane_curvature */
  double   T1nf;           /*  */
  double   Jdelta0f;       /*  */
  double   Sdelta0f;       /*  */
  double   Crdelta0f;      /*  */
  double   T2nf;           /*  */
  double   Jdelta1f;       /*  */
  double   Sdelta1f;       /*  */
  double   Crdelta1f;      /*  */
} FirstTrajectoryMotorPrimitivesParameters;

/* size of the serialized version of struct FirstTrajectoryMotorPrimitivesParameters */
#define FirstTrajectoryMotorPrimitivesParameters_size  188
#define FirstTrajectoryMotorPrimitivesParameters_n_fields 24


/* print FirstTrajectoryMotorPrimitivesParameters struct on stdio */
extern
void
buffer_to_FirstTrajectoryMotorPrimitivesParameters( uint8_t const buffer[], FirstTrajectoryMotorPrimitivesParameters * S );

/* serialize FirstTrajectoryMotorPrimitivesParameters struct to buffer */
extern
void
FirstTrajectoryMotorPrimitivesParameters_to_buffer( FirstTrajectoryMotorPrimitivesParameters const * S, uint8_t buffer[] );

/* get buffer and un-serialize to FirstTrajectoryMotorPrimitivesParameters struct */
extern
void
FirstTrajectoryMotorPrimitivesParameters_print( FirstTrajectoryMotorPrimitivesParameters const * S );

/* build topic for FirstTrajectoryMotorPrimitivesParameters struct */
extern
void
FirstTrajectoryMotorPrimitivesParameters_MQTT_topic( FirstTrajectoryMotorPrimitivesParameters const * S, char topic[], int topic_len );

/* check topic for FirstTrajectoryMotorPrimitivesParameters struct */
extern
int
FirstTrajectoryMotorPrimitivesParameters_MQTT_compare( char const topic[] );

/* build topic for FirstTrajectoryMotorPrimitivesParameters struct */
extern
void
FirstTrajectoryMotorPrimitivesParameters_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
