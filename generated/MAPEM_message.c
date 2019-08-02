
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "MAPEM_message.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print MAPEM_message struct on stdio */
void
MAPEM_message_print( MAPEM_message const * S ) {
  int i_count;
  printf( "UTC_time                                                   = %llu\n", S->UTC_time);
  printf( "v2x_header_msgID                                           = %u\n", S->v2x_header_msgID);
  printf( "v2x_header_originationStationID                            = %u\n", S->v2x_header_originationStationID);
  printf( "v2x_map_intersection_name                                  = %hhu\n", S->v2x_map_intersection_name);
  printf( "v2x_map_intersection_id                                    = %u\n", S->v2x_map_intersection_id);
  printf( "v2x_map_intersection_refLatitude                           = %d\n", S->v2x_map_intersection_refLatitude);
  printf( "v2x_map_intersection_refLongitude                          = %d\n", S->v2x_map_intersection_refLongitude);
  printf( "v2x_map_intersection_refAltitude                           = %d\n", S->v2x_map_intersection_refAltitude);
  printf( "v2x_map_intersection_laneWidth                             = %d\n", S->v2x_map_intersection_laneWidth);
  printf( "v2x_map_intersection_speedLimitType                        = %hhu\n", S->v2x_map_intersection_speedLimitType);
  printf( "v2x_map_intersection_speedLimitValue                       = %d\n", S->v2x_map_intersection_speedLimitValue);
  for ( i_count=0; i_count<16; ++i_count )
    printf( "v2x_map_intersection_LaneSet_ID[%d]                        = %hhu\n", i_count, S->v2x_map_intersection_LaneSet_ID[i_count]);
  for ( i_count=0; i_count<16; ++i_count )
    printf( "v2x_map_intersection_LaneSet_approach_ID[%d]               = %hhu\n", i_count, S->v2x_map_intersection_LaneSet_approach_ID[i_count]);
  for ( i_count=0; i_count<16; ++i_count )
    printf( "v2x_map_intersection_LaneSet_laneAttributes_directionalUse[%d] = %hhu\n", i_count, S->v2x_map_intersection_LaneSet_laneAttributes_directionalUse[i_count]);
  for ( i_count=0; i_count<160; ++i_count )
    printf( "v2x_map_intersection_LaneSet_nodeList_Xoffset[%d]          = %d\n", i_count, S->v2x_map_intersection_LaneSet_nodeList_Xoffset[i_count]);
  for ( i_count=0; i_count<160; ++i_count )
    printf( "v2x_map_intersection_LaneSet_nodeList_Yoffset[%d]          = %d\n", i_count, S->v2x_map_intersection_LaneSet_nodeList_Yoffset[i_count]);
  for ( i_count=0; i_count<16; ++i_count )
    printf( "v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue[%d] = %hu\n", i_count, S->v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue[i_count]);
  for ( i_count=0; i_count<16; ++i_count )
    printf( "v2x_map_intersection_LaneType_ID[%d]                       = %hhu\n", i_count, S->v2x_map_intersection_LaneType_ID[i_count]);
  for ( i_count=0; i_count<96; ++i_count )
    printf( "v2x_map_intersection_ConnectingLane_allowedManeuvers[%d]   = %hu\n", i_count, S->v2x_map_intersection_ConnectingLane_allowedManeuvers[i_count]);
  for ( i_count=0; i_count<96; ++i_count )
    printf( "v2x_map_intersection_LaneSet_connectingLaneID[%d]          = %hhu\n", i_count, S->v2x_map_intersection_LaneSet_connectingLaneID[i_count]);
  for ( i_count=0; i_count<96; ++i_count )
    printf( "v2x_map_intersection_LaneSet_connectingLaneSignalGroup[%d] = %hhu\n", i_count, S->v2x_map_intersection_LaneSet_connectingLaneSignalGroup[i_count]);
}


/* serialize MAPEM_message struct to buffer */
void
MAPEM_message_to_buffer(
  MAPEM_message const * S,
  uint8_t buffer[]
) {
  int i_count;
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint32_to_buffer( S->v2x_header_msgID, ptr );
  ptr += uint32_to_buffer( S->v2x_header_originationStationID, ptr );
  ptr += uint8_to_buffer( S->v2x_map_intersection_name, ptr );
  ptr += uint32_to_buffer( S->v2x_map_intersection_id, ptr );
  ptr += int32_to_buffer( S->v2x_map_intersection_refLatitude, ptr );
  ptr += int32_to_buffer( S->v2x_map_intersection_refLongitude, ptr );
  ptr += int32_to_buffer( S->v2x_map_intersection_refAltitude, ptr );
  ptr += int32_to_buffer( S->v2x_map_intersection_laneWidth, ptr );
  ptr += uint8_to_buffer( S->v2x_map_intersection_speedLimitType, ptr );
  ptr += int32_to_buffer( S->v2x_map_intersection_speedLimitValue, ptr );
  for ( i_count=0; i_count<16; ++i_count )
    { ptr += uint8_to_buffer( S->v2x_map_intersection_LaneSet_ID[i_count], ptr ); }
  for ( i_count=0; i_count<16; ++i_count )
    { ptr += uint8_to_buffer( S->v2x_map_intersection_LaneSet_approach_ID[i_count], ptr ); }
  for ( i_count=0; i_count<16; ++i_count )
    { ptr += uint8_to_buffer( S->v2x_map_intersection_LaneSet_laneAttributes_directionalUse[i_count], ptr ); }
  for ( i_count=0; i_count<160; ++i_count )
    { ptr += int32_to_buffer( S->v2x_map_intersection_LaneSet_nodeList_Xoffset[i_count], ptr ); }
  for ( i_count=0; i_count<160; ++i_count )
    { ptr += int32_to_buffer( S->v2x_map_intersection_LaneSet_nodeList_Yoffset[i_count], ptr ); }
  for ( i_count=0; i_count<16; ++i_count )
    { ptr += uint16_to_buffer( S->v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue[i_count], ptr ); }
  for ( i_count=0; i_count<16; ++i_count )
    { ptr += uint8_to_buffer( S->v2x_map_intersection_LaneType_ID[i_count], ptr ); }
  for ( i_count=0; i_count<96; ++i_count )
    { ptr += uint16_to_buffer( S->v2x_map_intersection_ConnectingLane_allowedManeuvers[i_count], ptr ); }
  for ( i_count=0; i_count<96; ++i_count )
    { ptr += uint8_to_buffer( S->v2x_map_intersection_LaneSet_connectingLaneID[i_count], ptr ); }
  for ( i_count=0; i_count<96; ++i_count )
    { ptr += uint8_to_buffer( S->v2x_map_intersection_LaneSet_connectingLaneSignalGroup[i_count], ptr ); }
}


/* get buffer and un-serialize to MAPEM_message struct */
void
buffer_to_MAPEM_message(
  uint8_t const buffer[],
  MAPEM_message * S
) {
  int i_count;
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint32( ptr, &S->v2x_header_msgID );
  ptr += buffer_to_uint32( ptr, &S->v2x_header_originationStationID );
  ptr += buffer_to_uint8( ptr, &S->v2x_map_intersection_name );
  ptr += buffer_to_uint32( ptr, &S->v2x_map_intersection_id );
  ptr += buffer_to_int32( ptr, &S->v2x_map_intersection_refLatitude );
  ptr += buffer_to_int32( ptr, &S->v2x_map_intersection_refLongitude );
  ptr += buffer_to_int32( ptr, &S->v2x_map_intersection_refAltitude );
  ptr += buffer_to_int32( ptr, &S->v2x_map_intersection_laneWidth );
  ptr += buffer_to_uint8( ptr, &S->v2x_map_intersection_speedLimitType );
  ptr += buffer_to_int32( ptr, &S->v2x_map_intersection_speedLimitValue );
  for ( i_count=0; i_count<16; ++i_count )
    { ptr += buffer_to_uint8( ptr, & S->v2x_map_intersection_LaneSet_ID[i_count] ); }
  for ( i_count=0; i_count<16; ++i_count )
    { ptr += buffer_to_uint8( ptr, & S->v2x_map_intersection_LaneSet_approach_ID[i_count] ); }
  for ( i_count=0; i_count<16; ++i_count )
    { ptr += buffer_to_uint8( ptr, & S->v2x_map_intersection_LaneSet_laneAttributes_directionalUse[i_count] ); }
  for ( i_count=0; i_count<160; ++i_count )
    { ptr += buffer_to_int32( ptr, & S->v2x_map_intersection_LaneSet_nodeList_Xoffset[i_count] ); }
  for ( i_count=0; i_count<160; ++i_count )
    { ptr += buffer_to_int32( ptr, & S->v2x_map_intersection_LaneSet_nodeList_Yoffset[i_count] ); }
  for ( i_count=0; i_count<16; ++i_count )
    { ptr += buffer_to_uint16( ptr, & S->v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue[i_count] ); }
  for ( i_count=0; i_count<16; ++i_count )
    { ptr += buffer_to_uint8( ptr, & S->v2x_map_intersection_LaneType_ID[i_count] ); }
  for ( i_count=0; i_count<96; ++i_count )
    { ptr += buffer_to_uint16( ptr, & S->v2x_map_intersection_ConnectingLane_allowedManeuvers[i_count] ); }
  for ( i_count=0; i_count<96; ++i_count )
    { ptr += buffer_to_uint8( ptr, & S->v2x_map_intersection_LaneSet_connectingLaneID[i_count] ); }
  for ( i_count=0; i_count<96; ++i_count )
    { ptr += buffer_to_uint8( ptr, & S->v2x_map_intersection_LaneSet_connectingLaneSignalGroup[i_count] ); }
}


/* build topic for MAPEM_message struct */
void
MAPEM_message_MQTT_topic(
  MAPEM_message const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/MAPEM";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->v2x_header_originationStationID );
}

int
MAPEM_message_MQTT_compare( char const topic[] ) {
  int topic_len = 15;
  char const * topic_ref = "SafeStrip/MAPEM";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for MAPEM_message struct */
void
MAPEM_message_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/MAPEM";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

