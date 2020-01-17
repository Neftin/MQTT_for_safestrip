
/*\
  Automatically generated
\*/

#ifndef FIRSTTRAJECTORYMOTORPRIMITIVESPARAMETERS_H
#define FIRSTTRAJECTORYMOTORPRIMITIVESPARAMETERS_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for FirstTrajectoryMotorPrimitivesParameters */
typedef struct {
  uint64_t UTC_time;       /* MISSING */
  int32_t  OutputID;       /* MISSING */
  double   T0;             /* MISSING */
  double   V0;             /* MISSING */
  double   A0;             /* MISSING */
  double   T1f;            /* MISSING */
  double   J0f;            /* MISSING */
  double   S0f;            /* MISSING */
  double   Cr0f;           /* MISSING */
  double   T2f;            /* MISSING */
  double   J1f;            /* MISSING */
  double   S1f;            /* MISSING */
  double   Cr1f;           /* MISSING */
  double   Sn0;            /* MISSING */
  double   Alpha0;         /* MISSING */
  double   Delta0;         /* MISSING */
  double   T1nf;           /* MISSING */
  double   Jdelta0f;       /* MISSING */
  double   Sdelta0f;       /* MISSING */
  double   Crdelta0f;      /* MISSING */
  double   T2nf;           /* MISSING */
  double   Jdelta1f;       /* MISSING */
  double   Sdelta1f;       /* MISSING */
  double   Crdelta1f;      /* MISSING */
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

/* get buffer and un-serialize to FirstTrajectoryMotorPrimitivesParameters struct */
extern
void
FirstTrajectoryMotorPrimitivesParameters_fileprint( FirstTrajectoryMotorPrimitivesParameters const * S , FILE * file_stream );

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
