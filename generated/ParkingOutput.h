
/*\
  Automatically generated
\*/

#ifndef PARKINGOUTPUT_H
#define PARKINGOUTPUT_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for ParkingOutput */
typedef struct {
  uint64_t UTC_time;                        /* MISSING */
  int32_t  OutputID;                        /* MISSING */
  uint32_t RFID_ID;                         /* MISSING */
  uint32_t Payment_Amount;                  /* MISSING */
  uint32_t Payment_and_parking_status;      /* MISSING */
} ParkingOutput;

/* size of the serialized version of struct ParkingOutput */
#define ParkingOutput_size  24
#define ParkingOutput_n_fields 5


/* print ParkingOutput struct on stdio */
extern
void
buffer_to_ParkingOutput( uint8_t const buffer[], ParkingOutput * S );

/* serialize ParkingOutput struct to buffer */
extern
void
ParkingOutput_to_buffer( ParkingOutput const * S, uint8_t buffer[] );

/* get buffer and un-serialize to ParkingOutput struct */
extern
void
ParkingOutput_print( ParkingOutput const * S );

/* get buffer and un-serialize to ParkingOutput struct */
extern
void
ParkingOutput_fileprint( ParkingOutput const * S , FILE * file_stream );

/* build topic for ParkingOutput struct */
extern
void
ParkingOutput_MQTT_topic( ParkingOutput const * S, char topic[], int topic_len );

/* check topic for ParkingOutput struct */
extern
int
ParkingOutput_MQTT_compare( char const topic[] );

/* build topic for ParkingOutput struct */
extern
void
ParkingOutput_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
