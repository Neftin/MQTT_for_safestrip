
/*\
  Automatically generated
\*/

#ifndef SETCODRIVERPARAMETERS_H
#define SETCODRIVERPARAMETERS_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for SetCodriverParameters */
typedef struct {
  uint64_t UTC_time;           /* MISSING */
  double   jerk_lower;         /* MISSING */
  double   jerk_higher;        /* MISSING */
  double   reaction_time;      /* MISSING */
  double   p1;                 /* MISSING */
  double   p2;                 /* MISSING */
  double   p3;                 /* MISSING */
} SetCodriverParameters;

/* size of the serialized version of struct SetCodriverParameters */
#define SetCodriverParameters_size  56
#define SetCodriverParameters_n_fields 7


/* print SetCodriverParameters struct on stdio */
extern
void
buffer_to_SetCodriverParameters( uint8_t const buffer[], SetCodriverParameters * S );

/* serialize SetCodriverParameters struct to buffer */
extern
void
SetCodriverParameters_to_buffer( SetCodriverParameters const * S, uint8_t buffer[] );

/* get buffer and un-serialize to SetCodriverParameters struct */
extern
void
SetCodriverParameters_print( SetCodriverParameters const * S );

/* get buffer and un-serialize to SetCodriverParameters struct */
extern
void
SetCodriverParameters_fileprint( SetCodriverParameters const * S , FILE * file_stream );

/* build topic for SetCodriverParameters struct */
extern
void
SetCodriverParameters_MQTT_topic( SetCodriverParameters const * S, char topic[], int topic_len );

/* check topic for SetCodriverParameters struct */
extern
int
SetCodriverParameters_MQTT_compare( char const topic[] );

/* build topic for SetCodriverParameters struct */
extern
void
SetCodriverParameters_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
