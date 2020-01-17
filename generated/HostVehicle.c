
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "HostVehicle.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print HostVehicle struct on stdio */
void
HostVehicle_print( HostVehicle const * S ) {
  printf( "UTC_time                         = %llu\n", S->UTC_time);
  printf( "Speed_vehicle_network            = %lg\n", S->Speed_vehicle_network);
  printf( "LongAcc_vehicle_network          = %lg\n", S->LongAcc_vehicle_network);
  printf( "LatAcc_vehicle_network           = %lg\n", S->LatAcc_vehicle_network);
  printf( "YawRate_vehicle_network          = %lg\n", S->YawRate_vehicle_network);
  printf( "SteerWheel_vehicle_network       = %lg\n", S->SteerWheel_vehicle_network);
  printf( "SteerWheelSpeed_vehicle_network  = %lg\n", S->SteerWheelSpeed_vehicle_network);
  printf( "BrakePressure_vehicle_network    = %lg\n", S->BrakePressure_vehicle_network);
  printf( "GasPedPos_vehicle_network        = %lg\n", S->GasPedPos_vehicle_network);
  printf( "BrakePedalSwitch_vehicle_network = %hhu\n", S->BrakePedalSwitch_vehicle_network);
  printf( "VehicleType                      = %d\n", S->VehicleType);
  printf( "VehicleBarLongPos                = %lg\n", S->VehicleBarLongPos);
}


/* print HostVehicle struct on file_stream */
void
HostVehicle_fileprint( HostVehicle const * S , FILE * file_stream ) {
  fprintf( file_stream , "UTC_time                         = %llu\n", S->UTC_time);
  fprintf( file_stream , "Speed_vehicle_network            = %lg\n", S->Speed_vehicle_network);
  fprintf( file_stream , "LongAcc_vehicle_network          = %lg\n", S->LongAcc_vehicle_network);
  fprintf( file_stream , "LatAcc_vehicle_network           = %lg\n", S->LatAcc_vehicle_network);
  fprintf( file_stream , "YawRate_vehicle_network          = %lg\n", S->YawRate_vehicle_network);
  fprintf( file_stream , "SteerWheel_vehicle_network       = %lg\n", S->SteerWheel_vehicle_network);
  fprintf( file_stream , "SteerWheelSpeed_vehicle_network  = %lg\n", S->SteerWheelSpeed_vehicle_network);
  fprintf( file_stream , "BrakePressure_vehicle_network    = %lg\n", S->BrakePressure_vehicle_network);
  fprintf( file_stream , "GasPedPos_vehicle_network        = %lg\n", S->GasPedPos_vehicle_network);
  fprintf( file_stream , "BrakePedalSwitch_vehicle_network = %hhu\n", S->BrakePedalSwitch_vehicle_network);
  fprintf( file_stream , "VehicleType                      = %d\n", S->VehicleType);
  fprintf( file_stream , "VehicleBarLongPos                = %lg\n", S->VehicleBarLongPos);
}


/* serialize HostVehicle struct to buffer */
void
HostVehicle_to_buffer(
  HostVehicle const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += double_to_buffer( S->Speed_vehicle_network, ptr );
  ptr += double_to_buffer( S->LongAcc_vehicle_network, ptr );
  ptr += double_to_buffer( S->LatAcc_vehicle_network, ptr );
  ptr += double_to_buffer( S->YawRate_vehicle_network, ptr );
  ptr += double_to_buffer( S->SteerWheel_vehicle_network, ptr );
  ptr += double_to_buffer( S->SteerWheelSpeed_vehicle_network, ptr );
  ptr += double_to_buffer( S->BrakePressure_vehicle_network, ptr );
  ptr += double_to_buffer( S->GasPedPos_vehicle_network, ptr );
  ptr += uint8_to_buffer( S->BrakePedalSwitch_vehicle_network, ptr );
  ptr += int32_to_buffer( S->VehicleType, ptr );
  ptr += double_to_buffer( S->VehicleBarLongPos, ptr );
}


/* get buffer and un-serialize to HostVehicle struct */
void
buffer_to_HostVehicle(
  uint8_t const buffer[],
  HostVehicle * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_double( ptr, &S->Speed_vehicle_network );
  ptr += buffer_to_double( ptr, &S->LongAcc_vehicle_network );
  ptr += buffer_to_double( ptr, &S->LatAcc_vehicle_network );
  ptr += buffer_to_double( ptr, &S->YawRate_vehicle_network );
  ptr += buffer_to_double( ptr, &S->SteerWheel_vehicle_network );
  ptr += buffer_to_double( ptr, &S->SteerWheelSpeed_vehicle_network );
  ptr += buffer_to_double( ptr, &S->BrakePressure_vehicle_network );
  ptr += buffer_to_double( ptr, &S->GasPedPos_vehicle_network );
  ptr += buffer_to_uint8( ptr, &S->BrakePedalSwitch_vehicle_network );
  ptr += buffer_to_int32( ptr, &S->VehicleType );
  ptr += buffer_to_double( ptr, &S->VehicleBarLongPos );
}


/* build topic for HostVehicle struct */
void
HostVehicle_MQTT_topic(
  HostVehicle const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/HostVehicle";
  snprintf( topic, topic_max_len, "%s", base_topic );
}

int
HostVehicle_MQTT_compare( char const topic[] ) {
  int topic_len = 21;
  char const * topic_ref = "SafeStrip/HostVehicle";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for HostVehicle struct */
void
HostVehicle_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/HostVehicle";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

