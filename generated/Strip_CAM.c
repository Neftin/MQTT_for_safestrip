
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "Strip_CAM.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print Strip_CAM struct on stdio */
void
Strip_CAM_print( Strip_CAM const * S ) {
  printf( "UTC_time                               = %llu\n", S->UTC_time);
  printf( "originationStationID                   = %u\n", S->originationStationID);
  printf( "StripID                                = %u\n", S->StripID);
  printf( "RFID_ID                                = %u\n", S->RFID_ID);
  printf( "StationType                            = %hhu\n", S->StationType);
  printf( "Latitude                               = %d\n", S->Latitude);
  printf( "Longitude                              = %d\n", S->Longitude);
  printf( "ConfidenceEllipse_semiMajor            = %d\n", S->ConfidenceEllipse_semiMajor);
  printf( "ConfidenceEllipse_semiMinor            = %d\n", S->ConfidenceEllipse_semiMinor);
  printf( "ConfidenceEllipse_semiMajorOrientation = %d\n", S->ConfidenceEllipse_semiMajorOrientation);
  printf( "Altitude                               = %d\n", S->Altitude);
  printf( "Heading                                = %hu\n", S->Heading);
  printf( "Speed                                  = %hu\n", S->Speed);
  printf( "VehicleLength                          = %hu\n", S->VehicleLength);
  printf( "VehicleWidth                           = %hhu\n", S->VehicleWidth);
  printf( "LongitudinalAcceleration               = %d\n", S->LongitudinalAcceleration);
  printf( "Lane_ID                                = %hhu\n", S->Lane_ID);
}


/* serialize Strip_CAM struct to buffer */
void
Strip_CAM_to_buffer(
  Strip_CAM const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += uint32_to_buffer( S->originationStationID, ptr );
  ptr += uint32_to_buffer( S->StripID, ptr );
  ptr += uint32_to_buffer( S->RFID_ID, ptr );
  ptr += uint8_to_buffer( S->StationType, ptr );
  ptr += int32_to_buffer( S->Latitude, ptr );
  ptr += int32_to_buffer( S->Longitude, ptr );
  ptr += int32_to_buffer( S->ConfidenceEllipse_semiMajor, ptr );
  ptr += int32_to_buffer( S->ConfidenceEllipse_semiMinor, ptr );
  ptr += int32_to_buffer( S->ConfidenceEllipse_semiMajorOrientation, ptr );
  ptr += int32_to_buffer( S->Altitude, ptr );
  ptr += uint16_to_buffer( S->Heading, ptr );
  ptr += uint16_to_buffer( S->Speed, ptr );
  ptr += uint16_to_buffer( S->VehicleLength, ptr );
  ptr += uint8_to_buffer( S->VehicleWidth, ptr );
  ptr += int32_to_buffer( S->LongitudinalAcceleration, ptr );
  ptr += uint8_to_buffer( S->Lane_ID, ptr );
}


/* get buffer and un-serialize to Strip_CAM struct */
void
buffer_to_Strip_CAM(
  uint8_t const buffer[],
  Strip_CAM * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_uint32( ptr, &S->originationStationID );
  ptr += buffer_to_uint32( ptr, &S->StripID );
  ptr += buffer_to_uint32( ptr, &S->RFID_ID );
  ptr += buffer_to_uint8( ptr, &S->StationType );
  ptr += buffer_to_int32( ptr, &S->Latitude );
  ptr += buffer_to_int32( ptr, &S->Longitude );
  ptr += buffer_to_int32( ptr, &S->ConfidenceEllipse_semiMajor );
  ptr += buffer_to_int32( ptr, &S->ConfidenceEllipse_semiMinor );
  ptr += buffer_to_int32( ptr, &S->ConfidenceEllipse_semiMajorOrientation );
  ptr += buffer_to_int32( ptr, &S->Altitude );
  ptr += buffer_to_uint16( ptr, &S->Heading );
  ptr += buffer_to_uint16( ptr, &S->Speed );
  ptr += buffer_to_uint16( ptr, &S->VehicleLength );
  ptr += buffer_to_uint8( ptr, &S->VehicleWidth );
  ptr += buffer_to_int32( ptr, &S->LongitudinalAcceleration );
  ptr += buffer_to_uint8( ptr, &S->Lane_ID );
}


/* build topic for Strip_CAM struct */
void
Strip_CAM_MQTT_topic(
  Strip_CAM const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/Strip_CAM";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->originationStationID );
}

int
Strip_CAM_MQTT_compare( char const topic[] ) {
  int topic_len = 19;
  char const * topic_ref = "SafeStrip/Strip_CAM";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for Strip_CAM struct */
void
Strip_CAM_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/Strip_CAM";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

