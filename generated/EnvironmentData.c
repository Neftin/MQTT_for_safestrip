
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "EnvironmentData.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print EnvironmentData struct on stdio */
void
EnvironmentData_print( EnvironmentData const * S ) {
  printf( "RSB_ID                 = %u\n", S->RSB_ID);
  printf( "StripID                = %u\n", S->StripID);
  printf( "Fog                    = %u\n", S->Fog);
  printf( "Road_type              = %hhu\n", S->Road_type);
  printf( "ice                    = %hhu\n", S->ice);
  printf( "temperature            = %d\n", S->temperature);
  printf( "gas_type               = %hhu\n", S->gas_type);
  printf( "gas_presence           = %u\n", S->gas_presence);
  printf( "humidity               = %u\n", S->humidity);
  printf( "Reported_surface_state = %hhu\n", S->Reported_surface_state);
  printf( "water_layer            = %hhu\n", S->water_layer);
  printf( "show_layer             = %hhu\n", S->show_layer);
  printf( "ice_layer              = %hhu\n", S->ice_layer);
}


/* print EnvironmentData struct on file_stream */
void
EnvironmentData_fileprint( EnvironmentData const * S , FILE * file_stream ) {
  fprintf( file_stream , "RSB_ID                 = %u\n", S->RSB_ID);
  fprintf( file_stream , "StripID                = %u\n", S->StripID);
  fprintf( file_stream , "Fog                    = %u\n", S->Fog);
  fprintf( file_stream , "Road_type              = %hhu\n", S->Road_type);
  fprintf( file_stream , "ice                    = %hhu\n", S->ice);
  fprintf( file_stream , "temperature            = %d\n", S->temperature);
  fprintf( file_stream , "gas_type               = %hhu\n", S->gas_type);
  fprintf( file_stream , "gas_presence           = %u\n", S->gas_presence);
  fprintf( file_stream , "humidity               = %u\n", S->humidity);
  fprintf( file_stream , "Reported_surface_state = %hhu\n", S->Reported_surface_state);
  fprintf( file_stream , "water_layer            = %hhu\n", S->water_layer);
  fprintf( file_stream , "show_layer             = %hhu\n", S->show_layer);
  fprintf( file_stream , "ice_layer              = %hhu\n", S->ice_layer);
}


/* serialize EnvironmentData struct to buffer */
void
EnvironmentData_to_buffer(
  EnvironmentData const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint32_to_buffer( S->RSB_ID, ptr );
  ptr += uint32_to_buffer( S->StripID, ptr );
  ptr += uint32_to_buffer( S->Fog, ptr );
  ptr += uint8_to_buffer( S->Road_type, ptr );
  ptr += uint8_to_buffer( S->ice, ptr );
  ptr += int32_to_buffer( S->temperature, ptr );
  ptr += uint8_to_buffer( S->gas_type, ptr );
  ptr += uint32_to_buffer( S->gas_presence, ptr );
  ptr += uint32_to_buffer( S->humidity, ptr );
  ptr += uint8_to_buffer( S->Reported_surface_state, ptr );
  ptr += uint8_to_buffer( S->water_layer, ptr );
  ptr += uint8_to_buffer( S->show_layer, ptr );
  ptr += uint8_to_buffer( S->ice_layer, ptr );
}


/* get buffer and un-serialize to EnvironmentData struct */
void
buffer_to_EnvironmentData(
  uint8_t const buffer[],
  EnvironmentData * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint32( ptr, &S->RSB_ID );
  ptr += buffer_to_uint32( ptr, &S->StripID );
  ptr += buffer_to_uint32( ptr, &S->Fog );
  ptr += buffer_to_uint8( ptr, &S->Road_type );
  ptr += buffer_to_uint8( ptr, &S->ice );
  ptr += buffer_to_int32( ptr, &S->temperature );
  ptr += buffer_to_uint8( ptr, &S->gas_type );
  ptr += buffer_to_uint32( ptr, &S->gas_presence );
  ptr += buffer_to_uint32( ptr, &S->humidity );
  ptr += buffer_to_uint8( ptr, &S->Reported_surface_state );
  ptr += buffer_to_uint8( ptr, &S->water_layer );
  ptr += buffer_to_uint8( ptr, &S->show_layer );
  ptr += buffer_to_uint8( ptr, &S->ice_layer );
}


/* build topic for EnvironmentData struct */
void
EnvironmentData_MQTT_topic(
  EnvironmentData const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/EnvironmentData";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->RSB_ID );
}

int
EnvironmentData_MQTT_compare( char const topic[] ) {
  int topic_len = 25;
  char const * topic_ref = "SafeStrip/EnvironmentData";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for EnvironmentData struct */
void
EnvironmentData_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/EnvironmentData";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

