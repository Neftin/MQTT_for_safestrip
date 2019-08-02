
/*\
  Automatically generated
\*/

#include "buffer_defines.h"
#include "FirstTrajectoryMotorPrimitivesParameters.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
  extern "C" {
#endif

/* print FirstTrajectoryMotorPrimitivesParameters struct on stdio */
void
FirstTrajectoryMotorPrimitivesParameters_print( FirstTrajectoryMotorPrimitivesParameters const * S ) {
  printf( "UTC_time  = %llu\n", S->UTC_time);
  printf( "OutputID  = %d\n", S->OutputID);
  printf( "T0        = %lg\n", S->T0);
  printf( "V0        = %lg\n", S->V0);
  printf( "A0        = %lg\n", S->A0);
  printf( "T1f       = %lg\n", S->T1f);
  printf( "J0f       = %lg\n", S->J0f);
  printf( "S0f       = %lg\n", S->S0f);
  printf( "Cr0f      = %lg\n", S->Cr0f);
  printf( "T2f       = %lg\n", S->T2f);
  printf( "J1f       = %lg\n", S->J1f);
  printf( "S1f       = %lg\n", S->S1f);
  printf( "Cr1f      = %lg\n", S->Cr1f);
  printf( "Sn0       = %lg\n", S->Sn0);
  printf( "Alpha0    = %lg\n", S->Alpha0);
  printf( "Delta0    = %lg\n", S->Delta0);
  printf( "T1nf      = %lg\n", S->T1nf);
  printf( "Jdelta0f  = %lg\n", S->Jdelta0f);
  printf( "Sdelta0f  = %lg\n", S->Sdelta0f);
  printf( "Crdelta0f = %lg\n", S->Crdelta0f);
  printf( "T2nf      = %lg\n", S->T2nf);
  printf( "Jdelta1f  = %lg\n", S->Jdelta1f);
  printf( "Sdelta1f  = %lg\n", S->Sdelta1f);
  printf( "Crdelta1f = %lg\n", S->Crdelta1f);
}


/* serialize FirstTrajectoryMotorPrimitivesParameters struct to buffer */
void
FirstTrajectoryMotorPrimitivesParameters_to_buffer(
  FirstTrajectoryMotorPrimitivesParameters const * S,
  uint8_t buffer[]
) {
  uint8_t * ptr = buffer;
  ptr += uint64_to_buffer( S->UTC_time, ptr );
  ptr += int32_to_buffer( S->OutputID, ptr );
  ptr += double_to_buffer( S->T0, ptr );
  ptr += double_to_buffer( S->V0, ptr );
  ptr += double_to_buffer( S->A0, ptr );
  ptr += double_to_buffer( S->T1f, ptr );
  ptr += double_to_buffer( S->J0f, ptr );
  ptr += double_to_buffer( S->S0f, ptr );
  ptr += double_to_buffer( S->Cr0f, ptr );
  ptr += double_to_buffer( S->T2f, ptr );
  ptr += double_to_buffer( S->J1f, ptr );
  ptr += double_to_buffer( S->S1f, ptr );
  ptr += double_to_buffer( S->Cr1f, ptr );
  ptr += double_to_buffer( S->Sn0, ptr );
  ptr += double_to_buffer( S->Alpha0, ptr );
  ptr += double_to_buffer( S->Delta0, ptr );
  ptr += double_to_buffer( S->T1nf, ptr );
  ptr += double_to_buffer( S->Jdelta0f, ptr );
  ptr += double_to_buffer( S->Sdelta0f, ptr );
  ptr += double_to_buffer( S->Crdelta0f, ptr );
  ptr += double_to_buffer( S->T2nf, ptr );
  ptr += double_to_buffer( S->Jdelta1f, ptr );
  ptr += double_to_buffer( S->Sdelta1f, ptr );
  ptr += double_to_buffer( S->Crdelta1f, ptr );
}


/* get buffer and un-serialize to FirstTrajectoryMotorPrimitivesParameters struct */
void
buffer_to_FirstTrajectoryMotorPrimitivesParameters(
  uint8_t const buffer[],
  FirstTrajectoryMotorPrimitivesParameters * S
) {
  uint8_t const * ptr = buffer;
  ptr += buffer_to_uint64( ptr, &S->UTC_time );
  ptr += buffer_to_int32( ptr, &S->OutputID );
  ptr += buffer_to_double( ptr, &S->T0 );
  ptr += buffer_to_double( ptr, &S->V0 );
  ptr += buffer_to_double( ptr, &S->A0 );
  ptr += buffer_to_double( ptr, &S->T1f );
  ptr += buffer_to_double( ptr, &S->J0f );
  ptr += buffer_to_double( ptr, &S->S0f );
  ptr += buffer_to_double( ptr, &S->Cr0f );
  ptr += buffer_to_double( ptr, &S->T2f );
  ptr += buffer_to_double( ptr, &S->J1f );
  ptr += buffer_to_double( ptr, &S->S1f );
  ptr += buffer_to_double( ptr, &S->Cr1f );
  ptr += buffer_to_double( ptr, &S->Sn0 );
  ptr += buffer_to_double( ptr, &S->Alpha0 );
  ptr += buffer_to_double( ptr, &S->Delta0 );
  ptr += buffer_to_double( ptr, &S->T1nf );
  ptr += buffer_to_double( ptr, &S->Jdelta0f );
  ptr += buffer_to_double( ptr, &S->Sdelta0f );
  ptr += buffer_to_double( ptr, &S->Crdelta0f );
  ptr += buffer_to_double( ptr, &S->T2nf );
  ptr += buffer_to_double( ptr, &S->Jdelta1f );
  ptr += buffer_to_double( ptr, &S->Sdelta1f );
  ptr += buffer_to_double( ptr, &S->Crdelta1f );
}


/* build topic for FirstTrajectoryMotorPrimitivesParameters struct */
void
FirstTrajectoryMotorPrimitivesParameters_MQTT_topic(
  FirstTrajectoryMotorPrimitivesParameters const * S,
  char topic[],
  int topic_max_len
) {
  char const * base_topic = "SafeStrip/FirstTrajectoryMotorPrimitivesParameters";
  snprintf( topic, topic_max_len, "%s/%d", base_topic, S->OutputID );
}

int
FirstTrajectoryMotorPrimitivesParameters_MQTT_compare( char const topic[] ) {
  int topic_len = 50;
  char const * topic_ref = "SafeStrip/FirstTrajectoryMotorPrimitivesParameters";
  return strncmp( topic, topic_ref, topic_len );
}


/* build topic for FirstTrajectoryMotorPrimitivesParameters struct */
void
FirstTrajectoryMotorPrimitivesParameters_MQTT_alltopics( char topic[], int topic_max_len ) {
  char const * base_topic = "SafeStrip/FirstTrajectoryMotorPrimitivesParameters";
  snprintf( topic, topic_max_len, "%s/#", base_topic );
}


#ifdef __cplusplus
};
#endif

