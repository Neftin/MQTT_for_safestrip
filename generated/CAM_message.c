
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "CAM_message.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print CAM_message struct on stdio */
void
CAM_message_print( CAM_message const * S ) {
  printf( "UTC_time                                       = %llu\n", S->UTC_time);
  printf( "v2x_cam_header_msgID                           = %u\n", S->v2x_cam_header_msgID);
  printf( "v2x_cam_header_originationStationID            = %u\n", S->v2x_cam_header_originationStationID);
  printf( "v2x_cam_GenerationDeltaTime                    = %hu\n", S->v2x_cam_GenerationDeltaTime);
  printf( "v2x_cam_StationType                            = %hhu\n", S->v2x_cam_StationType);
  printf( "v2x_cam_Latitude                               = %d\n", S->v2x_cam_Latitude);
  printf( "v2x_cam_Longitude                              = %d\n", S->v2x_cam_Longitude);
  printf( "v2x_cam_ConfidenceEllipse_semiMajor            = %d\n", S->v2x_cam_ConfidenceEllipse_semiMajor);
  printf( "v2x_cam_ConfidenceEllipse_semiMinor            = %d\n", S->v2x_cam_ConfidenceEllipse_semiMinor);
  printf( "v2x_cam_ConfidenceEllipse_semiMajorOrientation = %d\n", S->v2x_cam_ConfidenceEllipse_semiMajorOrientation);
  printf( "v2x_cam_Altitude                               = %d\n", S->v2x_cam_Altitude);
  printf( "v2x_cam_Heading                                = %hu\n", S->v2x_cam_Heading);
  printf( "v2x_cam_Speed                                  = %hu\n", S->v2x_cam_Speed);
  printf( "v2x_cam_VehicleLength                          = %hu\n", S->v2x_cam_VehicleLength);
  printf( "v2x_cam_VehicleWidth                           = %hhu\n", S->v2x_cam_VehicleWidth);
  printf( "v2x_cam_LongitudinalAcceleration               = %hd\n", S->v2x_cam_LongitudinalAcceleration);
  printf( "v2x_cam_YawRate                                = %hd\n", S->v2x_cam_YawRate);
  printf( "v2x_cam_AccelerationControl                    = %hhu\n", S->v2x_cam_AccelerationControl);
  printf( "v2x_cam_SteeringWheelAngle                     = %hd\n", S->v2x_cam_SteeringWheelAngle);
  printf( "v2x_cam_LateralAcceleration                    = %hd\n", S->v2x_cam_LateralAcceleration);
  printf( "v2x_cam_VehicleRole                            = %hu\n", S->v2x_cam_VehicleRole);
  printf( "v2x_cam_ExteriorLights_status                  = %hhu\n", S->v2x_cam_ExteriorLights_status);
}


/* print CAM_message struct on file_stream */
void
CAM_message_fileprint( CAM_message const * S , FILE * file_stream ) {
  fprintf( file_stream , "UTC_time                                       = %llu\n", S->UTC_time);
  fprintf( file_stream , "v2x_cam_header_msgID                           = %u\n", S->v2x_cam_header_msgID);
  fprintf( file_stream , "v2x_cam_header_originationStationID            = %u\n", S->v2x_cam_header_originationStationID);
  fprintf( file_stream , "v2x_cam_GenerationDeltaTime                    = %hu\n", S->v2x_cam_GenerationDeltaTime);
  fprintf( file_stream , "v2x_cam_StationType                            = %hhu\n", S->v2x_cam_StationType);
  fprintf( file_stream , "v2x_cam_Latitude                               = %d\n", S->v2x_cam_Latitude);
  fprintf( file_stream , "v2x_cam_Longitude                              = %d\n", S->v2x_cam_Longitude);
  fprintf( file_stream , "v2x_cam_ConfidenceEllipse_semiMajor            = %d\n", S->v2x_cam_ConfidenceEllipse_semiMajor);
  fprintf( file_stream , "v2x_cam_ConfidenceEllipse_semiMinor            = %d\n", S->v2x_cam_ConfidenceEllipse_semiMinor);
  fprintf( file_stream , "v2x_cam_ConfidenceEllipse_semiMajorOrientation = %d\n", S->v2x_cam_ConfidenceEllipse_semiMajorOrientation);
  fprintf( file_stream , "v2x_cam_Altitude                               = %d\n", S->v2x_cam_Altitude);
  fprintf( file_stream , "v2x_cam_Heading                                = %hu\n", S->v2x_cam_Heading);
  fprintf( file_stream , "v2x_cam_Speed                                  = %hu\n", S->v2x_cam_Speed);
  fprintf( file_stream , "v2x_cam_VehicleLength                          = %hu\n", S->v2x_cam_VehicleLength);
  fprintf( file_stream , "v2x_cam_VehicleWidth                           = %hhu\n", S->v2x_cam_VehicleWidth);
  fprintf( file_stream , "v2x_cam_LongitudinalAcceleration               = %hd\n", S->v2x_cam_LongitudinalAcceleration);
  fprintf( file_stream , "v2x_cam_YawRate                                = %hd\n", S->v2x_cam_YawRate);
  fprintf( file_stream , "v2x_cam_AccelerationControl                    = %hhu\n", S->v2x_cam_AccelerationControl);
  fprintf( file_stream , "v2x_cam_SteeringWheelAngle                     = %hd\n", S->v2x_cam_SteeringWheelAngle);
  fprintf( file_stream , "v2x_cam_LateralAcceleration                    = %hd\n", S->v2x_cam_LateralAcceleration);
  fprintf( file_stream , "v2x_cam_VehicleRole                            = %hu\n", S->v2x_cam_VehicleRole);
  fprintf( file_stream , "v2x_cam_ExteriorLights_status                  = %hhu\n", S->v2x_cam_ExteriorLights_status);
}


/* serialize CAM_message struct to buffer */
void
CAM_message_to_buffer(
  CAM_message const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint32_to_buffer( S->v2x_cam_header_msgID, ptr );
  ptr += uint32_to_buffer( S->v2x_cam_header_originationStationID, ptr );
  ptr += uint16_to_buffer( S->v2x_cam_GenerationDeltaTime, ptr );
  ptr += uint8_to_buffer( S->v2x_cam_StationType, ptr );
  ptr += int32_to_buffer( S->v2x_cam_Latitude, ptr );
  ptr += int32_to_buffer( S->v2x_cam_Longitude, ptr );
  ptr += int32_to_buffer( S->v2x_cam_ConfidenceEllipse_semiMajor, ptr );
  ptr += int32_to_buffer( S->v2x_cam_ConfidenceEllipse_semiMinor, ptr );
  ptr += int32_to_buffer( S->v2x_cam_ConfidenceEllipse_semiMajorOrientation, ptr );
  ptr += int32_to_buffer( S->v2x_cam_Altitude, ptr );
  ptr += uint16_to_buffer( S->v2x_cam_Heading, ptr );
  ptr += uint16_to_buffer( S->v2x_cam_Speed, ptr );
  ptr += uint16_to_buffer( S->v2x_cam_VehicleLength, ptr );
  ptr += uint8_to_buffer( S->v2x_cam_VehicleWidth, ptr );
  ptr += int16_to_buffer( S->v2x_cam_LongitudinalAcceleration, ptr );
  ptr += int16_to_buffer( S->v2x_cam_YawRate, ptr );
  ptr += uint8_to_buffer( S->v2x_cam_AccelerationControl, ptr );
  ptr += int16_to_buffer( S->v2x_cam_SteeringWheelAngle, ptr );
  ptr += int16_to_buffer( S->v2x_cam_LateralAcceleration, ptr );
  ptr += uint16_to_buffer( S->v2x_cam_VehicleRole, ptr );
  ptr += uint8_to_buffer( S->v2x_cam_ExteriorLights_status, ptr );
}


/* get buffer and un-serialize to CAM_message struct */
void
buffer_to_CAM_message(
  uint8_t const buffer[],
  CAM_message * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint32( ptr, &S->v2x_cam_header_msgID );
  ptr += buffer_to_uint32( ptr, &S->v2x_cam_header_originationStationID );
  ptr += buffer_to_uint16( ptr, &S->v2x_cam_GenerationDeltaTime );
  ptr += buffer_to_uint8( ptr, &S->v2x_cam_StationType );
  ptr += buffer_to_int32( ptr, &S->v2x_cam_Latitude );
  ptr += buffer_to_int32( ptr, &S->v2x_cam_Longitude );
  ptr += buffer_to_int32( ptr, &S->v2x_cam_ConfidenceEllipse_semiMajor );
  ptr += buffer_to_int32( ptr, &S->v2x_cam_ConfidenceEllipse_semiMinor );
  ptr += buffer_to_int32( ptr, &S->v2x_cam_ConfidenceEllipse_semiMajorOrientation );
  ptr += buffer_to_int32( ptr, &S->v2x_cam_Altitude );
  ptr += buffer_to_uint16( ptr, &S->v2x_cam_Heading );
  ptr += buffer_to_uint16( ptr, &S->v2x_cam_Speed );
  ptr += buffer_to_uint16( ptr, &S->v2x_cam_VehicleLength );
  ptr += buffer_to_uint8( ptr, &S->v2x_cam_VehicleWidth );
  ptr += buffer_to_int16( ptr, &S->v2x_cam_LongitudinalAcceleration );
  ptr += buffer_to_int16( ptr, &S->v2x_cam_YawRate );
  ptr += buffer_to_uint8( ptr, &S->v2x_cam_AccelerationControl );
  ptr += buffer_to_int16( ptr, &S->v2x_cam_SteeringWheelAngle );
  ptr += buffer_to_int16( ptr, &S->v2x_cam_LateralAcceleration );
  ptr += buffer_to_uint16( ptr, &S->v2x_cam_VehicleRole );
  ptr += buffer_to_uint8( ptr, &S->v2x_cam_ExteriorLights_status );
}


/* build topic for CAM_message struct */
void
CAM_message_MQTT_topic(
  CAM_message const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/CAM";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->v2x_cam_header_originationStationID );
}

int
CAM_message_MQTT_compare( char const topic[] ) {
  int topic_len = 13;
  char const * topic_ref = "SafeStrip/CAM";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for CAM_message struct */
void
CAM_message_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/CAM";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

