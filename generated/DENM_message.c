
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
  int i_count;
  printf( "UTC_time                                        = %llu\n", S->UTC_time);
  printf( "v2x_header_msgID                                = %u\n", S->v2x_header_msgID);
  printf( "v2x_header_originationStationID                 = %d\n", S->v2x_header_originationStationID);
  printf( "v2x_denm_sequenceNumber                         = %hu\n", S->v2x_denm_sequenceNumber);
  printf( "v2x_denm_detectionTime                          = %llu\n", S->v2x_denm_detectionTime);
  printf( "v2x_denm_eventPosition_latitude                 = %d\n", S->v2x_denm_eventPosition_latitude);
  printf( "v2x_denm_eventPosition_longitude                = %d\n", S->v2x_denm_eventPosition_longitude);
  printf( "v2x_denm_ConfidenceEllipse_semiMajor            = %d\n", S->v2x_denm_ConfidenceEllipse_semiMajor);
  printf( "v2x_denm_ConfidenceEllipse_semiMinor            = %d\n", S->v2x_denm_ConfidenceEllipse_semiMinor);
  printf( "v2x_denm_ConfidenceEllipse_semiMajorOrientation = %d\n", S->v2x_denm_ConfidenceEllipse_semiMajorOrientation);
  printf( "v2x_denm_eventPosition_altitude                 = %d\n", S->v2x_denm_eventPosition_altitude);
  printf( "v2x_denm_relevanceDistance                      = %hhu\n", S->v2x_denm_relevanceDistance);
  printf( "v2x_denm_relevanceTrafficDirection              = %hhu\n", S->v2x_denm_relevanceTrafficDirection);
  printf( "v2x_denm_validityDuration                       = %d\n", S->v2x_denm_validityDuration);
  printf( "v2x_denm_stationType                            = %hhu\n", S->v2x_denm_stationType);
  printf( "v2x_denm_eventType_CauseCode                    = %d\n", S->v2x_denm_eventType_CauseCode);
  printf( "v2x_denm_eventType_SubCauseCode                 = %d\n", S->v2x_denm_eventType_SubCauseCode);
  printf( "v2x_denm_frictionCoefficient_value              = %hu\n", S->v2x_denm_frictionCoefficient_value);
  printf( "v2x_denm_frictionCoefficient_confidence         = %hu\n", S->v2x_denm_frictionCoefficient_confidence);
  for ( i_count=0; i_count<10; ++i_count )
    printf( "v2x_denm_EventHistory_deltaLatitude[%d]         = %d\n", i_count, S->v2x_denm_EventHistory_deltaLatitude[i_count]);
  for ( i_count=0; i_count<10; ++i_count )
    printf( "v2x_denm_EventHistory_deltaLongitude[%d]        = %d\n", i_count, S->v2x_denm_EventHistory_deltaLongitude[i_count]);
  for ( i_count=0; i_count<10; ++i_count )
    printf( "v2x_denm_EventHistory_deltaAltitude[%d]         = %d\n", i_count, S->v2x_denm_EventHistory_deltaAltitude[i_count]);
}


/* serialize DENM_message struct to buffer */
void
DENM_message_to_buffer(
  DENM_message const * S,
  uint8_t buffer[]
) {
  int i_count;
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint32_to_buffer( S->v2x_header_msgID, ptr );
  ptr += int32_to_buffer( S->v2x_header_originationStationID, ptr );
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
  for ( i_count=0; i_count<10; ++i_count )
    { ptr += int32_to_buffer( S->v2x_denm_EventHistory_deltaLatitude[i_count], ptr ); }
  for ( i_count=0; i_count<10; ++i_count )
    { ptr += int32_to_buffer( S->v2x_denm_EventHistory_deltaLongitude[i_count], ptr ); }
  for ( i_count=0; i_count<10; ++i_count )
    { ptr += int32_to_buffer( S->v2x_denm_EventHistory_deltaAltitude[i_count], ptr ); }
}


/* get buffer and un-serialize to DENM_message struct */
void
buffer_to_DENM_message(
  uint8_t const buffer[],
  DENM_message * S
) {
  int i_count;
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint32( ptr, &S->v2x_header_msgID );
  ptr += buffer_to_int32( ptr, &S->v2x_header_originationStationID );
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
  for ( i_count=0; i_count<10; ++i_count )
    { ptr += buffer_to_int32( ptr, & S->v2x_denm_EventHistory_deltaLatitude[i_count] ); }
  for ( i_count=0; i_count<10; ++i_count )
    { ptr += buffer_to_int32( ptr, & S->v2x_denm_EventHistory_deltaLongitude[i_count] ); }
  for ( i_count=0; i_count<10; ++i_count )
    { ptr += buffer_to_int32( ptr, & S->v2x_denm_EventHistory_deltaAltitude[i_count] ); }
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
