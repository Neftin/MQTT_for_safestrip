
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "DENM_message.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print DENM_message struct on stdio */
void
DENM_message_print( DENM_message const * S ) {
  printf( "UTC_time                                                                   = %llu\n", S->UTC_time);
  printf( "v2x_header_StationID                                                       = %u\n", S->v2x_header_StationID);
  printf( "v2x_header_originationStationID                                            = %u\n", S->v2x_header_originationStationID);
  printf( "v2x_denm_sequenceNumber                                                    = %hu\n", S->v2x_denm_sequenceNumber);
  printf( "v2x_denm_detectionTime                                                     = %llu\n", S->v2x_denm_detectionTime);
  printf( "v2x_denm_eventPosition_latitude                                            = %d\n", S->v2x_denm_eventPosition_latitude);
  printf( "v2x_denm_eventPosition_longitude                                           = %d\n", S->v2x_denm_eventPosition_longitude);
  printf( "v2x_denm_ConfidenceEllipse_semiMajor                                       = %d\n", S->v2x_denm_ConfidenceEllipse_semiMajor);
  printf( "v2x_denm_ConfidenceEllipse_semiMinor                                       = %d\n", S->v2x_denm_ConfidenceEllipse_semiMinor);
  printf( "v2x_denm_ConfidenceEllipse_semiMajorOrientation                            = %d\n", S->v2x_denm_ConfidenceEllipse_semiMajorOrientation);
  printf( "v2x_denm_eventPosition_altitude                                            = %d\n", S->v2x_denm_eventPosition_altitude);
  printf( "v2x_denm_relevanceDistance                                                 = %hhu\n", S->v2x_denm_relevanceDistance);
  printf( "v2x_denm_relevanceTrafficDirection                                         = %hhu\n", S->v2x_denm_relevanceTrafficDirection);
  printf( "v2x_denm_validityDuration                                                  = %d\n", S->v2x_denm_validityDuration);
  printf( "v2x_denm_stationType                                                       = %hhu\n", S->v2x_denm_stationType);
  printf( "v2x_denm_eventType_CauseCode                                               = %d\n", S->v2x_denm_eventType_CauseCode);
  printf( "v2x_denm_eventType_SubCauseCode                                            = %d\n", S->v2x_denm_eventType_SubCauseCode);
  printf( "v2x_denm_frictionCoefficient_value                                         = %hu\n", S->v2x_denm_frictionCoefficient_value);
  printf( "v2x_denm_frictionCoefficient_confidence                                    = %hu\n", S->v2x_denm_frictionCoefficient_confidence);
  printf( "v2x_denm_alacarte_LanePosition                                             = %d\n", S->v2x_denm_alacarte_LanePosition);
  printf( "v2x_denm_alacarte_RoadWorksContainerExtended_closedLanes_DrivingLaneStatus = %u\n", S->v2x_denm_alacarte_RoadWorksContainerExtended_closedLanes_DrivingLaneStatus);
}


/* print DENM_message struct on file_stream */
void
DENM_message_fileprint( DENM_message const * S , FILE * file_stream ) {
  fprintf( file_stream , "UTC_time                                                                   = %llu\n", S->UTC_time);
  fprintf( file_stream , "v2x_header_StationID                                                       = %u\n", S->v2x_header_StationID);
  fprintf( file_stream , "v2x_header_originationStationID                                            = %u\n", S->v2x_header_originationStationID);
  fprintf( file_stream , "v2x_denm_sequenceNumber                                                    = %hu\n", S->v2x_denm_sequenceNumber);
  fprintf( file_stream , "v2x_denm_detectionTime                                                     = %llu\n", S->v2x_denm_detectionTime);
  fprintf( file_stream , "v2x_denm_eventPosition_latitude                                            = %d\n", S->v2x_denm_eventPosition_latitude);
  fprintf( file_stream , "v2x_denm_eventPosition_longitude                                           = %d\n", S->v2x_denm_eventPosition_longitude);
  fprintf( file_stream , "v2x_denm_ConfidenceEllipse_semiMajor                                       = %d\n", S->v2x_denm_ConfidenceEllipse_semiMajor);
  fprintf( file_stream , "v2x_denm_ConfidenceEllipse_semiMinor                                       = %d\n", S->v2x_denm_ConfidenceEllipse_semiMinor);
  fprintf( file_stream , "v2x_denm_ConfidenceEllipse_semiMajorOrientation                            = %d\n", S->v2x_denm_ConfidenceEllipse_semiMajorOrientation);
  fprintf( file_stream , "v2x_denm_eventPosition_altitude                                            = %d\n", S->v2x_denm_eventPosition_altitude);
  fprintf( file_stream , "v2x_denm_relevanceDistance                                                 = %hhu\n", S->v2x_denm_relevanceDistance);
  fprintf( file_stream , "v2x_denm_relevanceTrafficDirection                                         = %hhu\n", S->v2x_denm_relevanceTrafficDirection);
  fprintf( file_stream , "v2x_denm_validityDuration                                                  = %d\n", S->v2x_denm_validityDuration);
  fprintf( file_stream , "v2x_denm_stationType                                                       = %hhu\n", S->v2x_denm_stationType);
  fprintf( file_stream , "v2x_denm_eventType_CauseCode                                               = %d\n", S->v2x_denm_eventType_CauseCode);
  fprintf( file_stream , "v2x_denm_eventType_SubCauseCode                                            = %d\n", S->v2x_denm_eventType_SubCauseCode);
  fprintf( file_stream , "v2x_denm_frictionCoefficient_value                                         = %hu\n", S->v2x_denm_frictionCoefficient_value);
  fprintf( file_stream , "v2x_denm_frictionCoefficient_confidence                                    = %hu\n", S->v2x_denm_frictionCoefficient_confidence);
  fprintf( file_stream , "v2x_denm_alacarte_LanePosition                                             = %d\n", S->v2x_denm_alacarte_LanePosition);
  fprintf( file_stream , "v2x_denm_alacarte_RoadWorksContainerExtended_closedLanes_DrivingLaneStatus = %u\n", S->v2x_denm_alacarte_RoadWorksContainerExtended_closedLanes_DrivingLaneStatus);
}


/* serialize DENM_message struct to buffer */
void
DENM_message_to_buffer(
  DENM_message const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint32_to_buffer( S->v2x_header_StationID, ptr );
  ptr += uint32_to_buffer( S->v2x_header_originationStationID, ptr );
  ptr += uint16_to_buffer( S->v2x_denm_sequenceNumber, ptr );
  ptr += uint64_to_buffer( S->v2x_denm_detectionTime, ptr );
  ptr += int32_to_buffer( S->v2x_denm_eventPosition_latitude, ptr );
  ptr += int32_to_buffer( S->v2x_denm_eventPosition_longitude, ptr );
  ptr += int32_to_buffer( S->v2x_denm_ConfidenceEllipse_semiMajor, ptr );
  ptr += int32_to_buffer( S->v2x_denm_ConfidenceEllipse_semiMinor, ptr );
  ptr += int32_to_buffer( S->v2x_denm_ConfidenceEllipse_semiMajorOrientation, ptr );
  ptr += int32_to_buffer( S->v2x_denm_eventPosition_altitude, ptr );
  ptr += uint8_to_buffer( S->v2x_denm_relevanceDistance, ptr );
  ptr += uint8_to_buffer( S->v2x_denm_relevanceTrafficDirection, ptr );
  ptr += int32_to_buffer( S->v2x_denm_validityDuration, ptr );
  ptr += uint8_to_buffer( S->v2x_denm_stationType, ptr );
  ptr += int32_to_buffer( S->v2x_denm_eventType_CauseCode, ptr );
  ptr += int32_to_buffer( S->v2x_denm_eventType_SubCauseCode, ptr );
  ptr += uint16_to_buffer( S->v2x_denm_frictionCoefficient_value, ptr );
  ptr += uint16_to_buffer( S->v2x_denm_frictionCoefficient_confidence, ptr );
  ptr += int32_to_buffer( S->v2x_denm_alacarte_LanePosition, ptr );
  ptr += uint32_to_buffer( S->v2x_denm_alacarte_RoadWorksContainerExtended_closedLanes_DrivingLaneStatus, ptr );
}


/* get buffer and un-serialize to DENM_message struct */
void
buffer_to_DENM_message(
  uint8_t const buffer[],
  DENM_message * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint32( ptr, &S->v2x_header_StationID );
  ptr += buffer_to_uint32( ptr, &S->v2x_header_originationStationID );
  ptr += buffer_to_uint16( ptr, &S->v2x_denm_sequenceNumber );
  ptr += buffer_to_uint64( ptr, &S->v2x_denm_detectionTime );
  ptr += buffer_to_int32( ptr, &S->v2x_denm_eventPosition_latitude );
  ptr += buffer_to_int32( ptr, &S->v2x_denm_eventPosition_longitude );
  ptr += buffer_to_int32( ptr, &S->v2x_denm_ConfidenceEllipse_semiMajor );
  ptr += buffer_to_int32( ptr, &S->v2x_denm_ConfidenceEllipse_semiMinor );
  ptr += buffer_to_int32( ptr, &S->v2x_denm_ConfidenceEllipse_semiMajorOrientation );
  ptr += buffer_to_int32( ptr, &S->v2x_denm_eventPosition_altitude );
  ptr += buffer_to_uint8( ptr, &S->v2x_denm_relevanceDistance );
  ptr += buffer_to_uint8( ptr, &S->v2x_denm_relevanceTrafficDirection );
  ptr += buffer_to_int32( ptr, &S->v2x_denm_validityDuration );
  ptr += buffer_to_uint8( ptr, &S->v2x_denm_stationType );
  ptr += buffer_to_int32( ptr, &S->v2x_denm_eventType_CauseCode );
  ptr += buffer_to_int32( ptr, &S->v2x_denm_eventType_SubCauseCode );
  ptr += buffer_to_uint16( ptr, &S->v2x_denm_frictionCoefficient_value );
  ptr += buffer_to_uint16( ptr, &S->v2x_denm_frictionCoefficient_confidence );
  ptr += buffer_to_int32( ptr, &S->v2x_denm_alacarte_LanePosition );
  ptr += buffer_to_uint32( ptr, &S->v2x_denm_alacarte_RoadWorksContainerExtended_closedLanes_DrivingLaneStatus );
}


/* build topic for DENM_message struct */
void
DENM_message_MQTT_topic(
  DENM_message const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/DENM";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->v2x_header_originationStationID );
}

int
DENM_message_MQTT_compare( char const topic[] ) {
  int topic_len = 14;
  char const * topic_ref = "SafeStrip/DENM";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for DENM_message struct */
void
DENM_message_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/DENM";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

