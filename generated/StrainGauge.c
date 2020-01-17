
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "StrainGauge.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print StrainGauge struct on stdio */
void
StrainGauge_print( StrainGauge const * S ) {
  printf( "UTC_time                = %llu\n", S->UTC_time);
  printf( "StripID                 = %u\n", S->StripID);
  printf( "Strain_gauge_Sensor_ID  = %d\n", S->Strain_gauge_Sensor_ID);
  printf( "Strain_gauge_Amplitude  = %lg\n", S->Strain_gauge_Amplitude);
  printf( "Strain_gauge_event_time = %lg\n", S->Strain_gauge_event_time);
  printf( "Exponential_decay       = %lg\n", S->Exponential_decay);
}


/* print StrainGauge struct on file_stream */
void
StrainGauge_fileprint( StrainGauge const * S , FILE * file_stream ) {
  fprintf( file_stream , "UTC_time                = %llu\n", S->UTC_time);
  fprintf( file_stream , "StripID                 = %u\n", S->StripID);
  fprintf( file_stream , "Strain_gauge_Sensor_ID  = %d\n", S->Strain_gauge_Sensor_ID);
  fprintf( file_stream , "Strain_gauge_Amplitude  = %lg\n", S->Strain_gauge_Amplitude);
  fprintf( file_stream , "Strain_gauge_event_time = %lg\n", S->Strain_gauge_event_time);
  fprintf( file_stream , "Exponential_decay       = %lg\n", S->Exponential_decay);
}


/* serialize StrainGauge struct to buffer */
void
StrainGauge_to_buffer(
  StrainGauge const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint32_to_buffer( S->StripID, ptr );
  ptr += int32_to_buffer( S->Strain_gauge_Sensor_ID, ptr );
  ptr += double_to_buffer( S->Strain_gauge_Amplitude, ptr );
  ptr += double_to_buffer( S->Strain_gauge_event_time, ptr );
  ptr += double_to_buffer( S->Exponential_decay, ptr );
}


/* get buffer and un-serialize to StrainGauge struct */
void
buffer_to_StrainGauge(
  uint8_t const buffer[],
  StrainGauge * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint32( ptr, &S->StripID );
  ptr += buffer_to_int32( ptr, &S->Strain_gauge_Sensor_ID );
  ptr += buffer_to_double( ptr, &S->Strain_gauge_Amplitude );
  ptr += buffer_to_double( ptr, &S->Strain_gauge_event_time );
  ptr += buffer_to_double( ptr, &S->Exponential_decay );
}


/* build topic for StrainGauge struct */
void
StrainGauge_MQTT_topic(
  StrainGauge const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/StrainGauge";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->StripID );
}

int
StrainGauge_MQTT_compare( char const topic[] ) {
  int topic_len = 21;
  char const * topic_ref = "SafeStrip/StrainGauge";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for StrainGauge struct */
void
StrainGauge_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/StrainGauge";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

