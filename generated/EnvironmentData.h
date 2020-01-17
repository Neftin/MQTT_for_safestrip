
/*\
  Automatically generated
\*/

#ifndef ENVIRONMENTDATA_H
#define ENVIRONMENTDATA_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for EnvironmentData */
typedef struct {
  uint32_t RSB_ID;                      /* MISSING */
  uint32_t StripID;                     /* MISSING */
  uint32_t Fog;                         /* MISSING */
  uint8_t  Road_type;                   /* MISSING */
  uint8_t  ice;                         /* MISSING */
  int32_t  temperature;                 /* MISSING */
  uint8_t  gas_type;                    /* MISSING */
  uint32_t gas_presence;                /* MISSING */
  uint32_t humidity;                    /* MISSING */
  uint8_t  Reported_surface_state;      /* MISSING */
  uint8_t  water_layer;                 /* MISSING */
  uint8_t  show_layer;                  /* MISSING */
  uint8_t  ice_layer;                   /* MISSING */
} EnvironmentData;

/* size of the serialized version of struct EnvironmentData */
#define EnvironmentData_size  31
#define EnvironmentData_n_fields 13


/* print EnvironmentData struct on stdio */
extern
void
buffer_to_EnvironmentData( uint8_t const buffer[], EnvironmentData * S );

/* serialize EnvironmentData struct to buffer */
extern
void
EnvironmentData_to_buffer( EnvironmentData const * S, uint8_t buffer[] );

/* get buffer and un-serialize to EnvironmentData struct */
extern
void
EnvironmentData_print( EnvironmentData const * S );

/* get buffer and un-serialize to EnvironmentData struct */
extern
void
EnvironmentData_fileprint( EnvironmentData const * S , FILE * file_stream );

/* build topic for EnvironmentData struct */
extern
void
EnvironmentData_MQTT_topic( EnvironmentData const * S, char topic[], int topic_len );

/* check topic for EnvironmentData struct */
extern
int
EnvironmentData_MQTT_compare( char const topic[] );

/* build topic for EnvironmentData struct */
extern
void
EnvironmentData_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
