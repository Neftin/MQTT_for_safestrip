
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "RoadDataFrictionInputs.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print RoadDataFrictionInputs struct on stdio */
void
RoadDataFrictionInputs_print( RoadDataFrictionInputs const * S ) {
  int i_count;
  printf( "StripID                = %u\n", S->StripID);
  printf( "Fog                    = %u\n", S->Fog);
  printf( "Road_type              = %hhu\n", S->Road_type);
  printf( "ice                    = %hhu\n", S->ice);
  printf( "temperature            = %d\n", S->temperature);
  printf( "gas_type               = %hhu\n", S->gas_type);
  for ( i_count=0; i_count<5; ++i_count )
    printf( "gas_presence[%d]       = %u\n", i_count, S->gas_presence[i_count]);
  printf( "humidity               = %u\n", S->humidity);
  printf( "Reported_surface_state = %hhu\n", S->Reported_surface_state);
  printf( "water_layer            = %hhu\n", S->water_layer);
  printf( "show_layer             = %hhu\n", S->show_layer);
  printf( "ice_layer              = %hhu\n", S->ice_layer);
}


/* serialize RoadDataFrictionInputs struct to buffer */
void
RoadDataFrictionInputs_to_buffer(
  RoadDataFrictionInputs const * S,
  uint8_t buffer[]
) {
  int i_count;
  uint8_t * ptr = buffer;
  ptr += uint32_to_buffer( S->StripID, ptr );
  ptr += uint32_to_buffer( S->Fog, ptr );
  ptr += uint8_to_buffer( S->Road_type, ptr );
  ptr += uint8_to_buffer( S->ice, ptr );
  ptr += int32_to_buffer( S->temperature, ptr );
  ptr += uint8_to_buffer( S->gas_type, ptr );
  for ( i_count=0; i_count<5; ++i_count )
    { ptr += uint32_to_buffer( S->gas_presence[i_count], ptr ); }
  ptr += uint32_to_buffer( S->humidity, ptr );
  ptr += uint8_to_buffer( S->Reported_surface_state, ptr );
  ptr += uint8_to_buffer( S->water_layer, ptr );
  ptr += uint8_to_buffer( S->show_layer, ptr );
  ptr += uint8_to_buffer( S->ice_layer, ptr );
}


/* get buffer and un-serialize to RoadDataFrictionInputs struct */
void
buffer_to_RoadDataFrictionInputs(
  uint8_t const buffer[],
  RoadDataFrictionInputs * S
) {
  int i_count;
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint32( ptr, &S->StripID );
  ptr += buffer_to_uint32( ptr, &S->Fog );
  ptr += buffer_to_uint8( ptr, &S->Road_type );
  ptr += buffer_to_uint8( ptr, &S->ice );
  ptr += buffer_to_int32( ptr, &S->temperature );
  ptr += buffer_to_uint8( ptr, &S->gas_type );
  for ( i_count=0; i_count<5; ++i_count )
    { ptr += buffer_to_uint32( ptr, & S->gas_presence[i_count] ); }
  ptr += buffer_to_uint32( ptr, &S->humidity );
  ptr += buffer_to_uint8( ptr, &S->Reported_surface_state );
  ptr += buffer_to_uint8( ptr, &S->water_layer );
  ptr += buffer_to_uint8( ptr, &S->show_layer );
  ptr += buffer_to_uint8( ptr, &S->ice_layer );
}


/* build topic for RoadDataFrictionInputs struct */
void
RoadDataFrictionInputs_MQTT_topic(
  RoadDataFrictionInputs const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/RoadDataFrictionInputs";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->StripID );
}

int
RoadDataFrictionInputs_MQTT_compare( char const topic[] ) {
  int topic_len = 32;
  char const * topic_ref = "SafeStrip/RoadDataFrictionInputs";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for RoadDataFrictionInputs struct */
void
RoadDataFrictionInputs_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/RoadDataFrictionInputs";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

