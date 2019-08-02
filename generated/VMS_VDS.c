
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "VMS_VDS.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print VMS_VDS struct on stdio */
void
VMS_VDS_print( VMS_VDS const * S ) {
  printf( "UTC_time                          = %llu\n", S->UTC_time);
  printf( "OutputID                          = %d\n", S->OutputID);
  printf( "VMS_traffic_condition             = %hhu\n", S->VMS_traffic_condition);
  printf( "VMS_roadworks                     = %hhu\n", S->VMS_roadworks);
  printf( "VMS_AWC_adhesion                  = %hhu\n", S->VMS_AWC_adhesion);
  printf( "VMS_HL_surface_condition          = %hhu\n", S->VMS_HL_surface_condition);
  printf( "VMS_HL_obstacle_on_the_road       = %hhu\n", S->VMS_HL_obstacle_on_the_road);
  printf( "VMS_AWC_extreme_weather_condition = %hhu\n", S->VMS_AWC_extreme_weather_condition);
  printf( "VMS_AWC_visibility                = %hhu\n", S->VMS_AWC_visibility);
  printf( "VMS_AWC_precipitation             = %hhu\n", S->VMS_AWC_precipitation);
  printf( "VMS_stationary_vehicle            = %hhu\n", S->VMS_stationary_vehicle);
}


/* serialize VMS_VDS struct to buffer */
void
VMS_VDS_to_buffer(
  VMS_VDS const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += int32_to_buffer( S->OutputID, ptr );
  ptr += uint8_to_buffer( S->VMS_traffic_condition, ptr );
  ptr += uint8_to_buffer( S->VMS_roadworks, ptr );
  ptr += uint8_to_buffer( S->VMS_AWC_adhesion, ptr );
  ptr += uint8_to_buffer( S->VMS_HL_surface_condition, ptr );
  ptr += uint8_to_buffer( S->VMS_HL_obstacle_on_the_road, ptr );
  ptr += uint8_to_buffer( S->VMS_AWC_extreme_weather_condition, ptr );
  ptr += uint8_to_buffer( S->VMS_AWC_visibility, ptr );
  ptr += uint8_to_buffer( S->VMS_AWC_precipitation, ptr );
  ptr += uint8_to_buffer( S->VMS_stationary_vehicle, ptr );
}


/* get buffer and un-serialize to VMS_VDS struct */
void
buffer_to_VMS_VDS(
  uint8_t const buffer[],
  VMS_VDS * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_int32( ptr, &S->OutputID );
  ptr += buffer_to_uint8( ptr, &S->VMS_traffic_condition );
  ptr += buffer_to_uint8( ptr, &S->VMS_roadworks );
  ptr += buffer_to_uint8( ptr, &S->VMS_AWC_adhesion );
  ptr += buffer_to_uint8( ptr, &S->VMS_HL_surface_condition );
  ptr += buffer_to_uint8( ptr, &S->VMS_HL_obstacle_on_the_road );
  ptr += buffer_to_uint8( ptr, &S->VMS_AWC_extreme_weather_condition );
  ptr += buffer_to_uint8( ptr, &S->VMS_AWC_visibility );
  ptr += buffer_to_uint8( ptr, &S->VMS_AWC_precipitation );
  ptr += buffer_to_uint8( ptr, &S->VMS_stationary_vehicle );
}


/* build topic for VMS_VDS struct */
void
VMS_VDS_MQTT_topic(
  VMS_VDS const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/VMS_VDS";
  snprintf( topic, topic_max_len, "%s", base_topic );
}

int
VMS_VDS_MQTT_compare( char const topic[] ) {
  int topic_len = 17;
  char const * topic_ref = "SafeStrip/VMS_VDS";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for VMS_VDS struct */
void
VMS_VDS_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/VMS_VDS";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

