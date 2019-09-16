
/*\
  Automatically generated
\*/

#ifndef STRAINGAUGE_H
#define STRAINGAUGE_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for StrainGauge */
typedef struct {
  uint64_t UTC_time;                          /* Time_at_which_the_signal_is_sent:_Stanrdard_UTC_time_is_used */
  uint32_t StripID;                           /* ID_of_the_strip */
  uint32_t Strain_gauge_Sensor_ID;            /*  */
  double   Strain_gauge_Cumulative_time;      /*  */
  double   Strain_gage_output_voltage;        /*  */
  uint32_t Estimated_remaining_life;          /*  */
  double   Remaininglifeprobability;          /*  */
} StrainGauge;

/* size of the serialized version of struct StrainGauge */
#define StrainGauge_size  44
#define StrainGauge_n_fields 7


/* print StrainGauge struct on stdio */
extern
void
buffer_to_StrainGauge( uint8_t const buffer[], StrainGauge * S );

/* serialize StrainGauge struct to buffer */
extern
void
StrainGauge_to_buffer( StrainGauge const * S, uint8_t buffer[] );

/* get buffer and un-serialize to StrainGauge struct */
extern
void
StrainGauge_print( StrainGauge const * S );

/* build topic for StrainGauge struct */
extern
void
StrainGauge_MQTT_topic( StrainGauge const * S, char topic[], int topic_len );

/* check topic for StrainGauge struct */
extern
int
StrainGauge_MQTT_compare( char const topic[] );

/* build topic for StrainGauge struct */
extern
void
StrainGauge_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
