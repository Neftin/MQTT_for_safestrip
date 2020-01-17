
/*\
  Automatically generated
\*/

#ifndef STRIP_CAM_H
#define STRIP_CAM_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for Strip_CAM */
typedef struct {
  uint64_t UTC_time;                                    /* MISSING */
  uint32_t originationStationID;                        /* MISSING */
  uint32_t StripID;                                     /* MISSING */
  uint32_t RFID_ID;                                     /* MISSING */
  uint8_t  StationType;                                 /* MISSING */
  int32_t  Latitude;                                    /* MISSING */
  int32_t  Longitude;                                   /* MISSING */
  int32_t  ConfidenceEllipse_semiMajor;                 /* MISSING */
  int32_t  ConfidenceEllipse_semiMinor;                 /* MISSING */
  int32_t  ConfidenceEllipse_semiMajorOrientation;      /* MISSING */
  int32_t  Altitude;                                    /* MISSING */
  uint16_t Heading;                                     /* MISSING */
  uint16_t Speed;                                       /* MISSING */
  uint16_t VehicleLength;                               /* MISSING */
  uint8_t  VehicleWidth;                                /* MISSING */
  int32_t  LongitudinalAcceleration;                    /* MISSING */
  uint8_t  Lane_ID;                                     /* MISSING */
} Strip_CAM;

/* size of the serialized version of struct Strip_CAM */
#define Strip_CAM_size  57
#define Strip_CAM_n_fields 17


/* print Strip_CAM struct on stdio */
extern
void
buffer_to_Strip_CAM( uint8_t const buffer[], Strip_CAM * S );

/* serialize Strip_CAM struct to buffer */
extern
void
Strip_CAM_to_buffer( Strip_CAM const * S, uint8_t buffer[] );

/* get buffer and un-serialize to Strip_CAM struct */
extern
void
Strip_CAM_print( Strip_CAM const * S );

/* get buffer and un-serialize to Strip_CAM struct */
extern
void
Strip_CAM_fileprint( Strip_CAM const * S , FILE * file_stream );

/* build topic for Strip_CAM struct */
extern
void
Strip_CAM_MQTT_topic( Strip_CAM const * S, char topic[], int topic_len );

/* check topic for Strip_CAM struct */
extern
int
Strip_CAM_MQTT_compare( char const topic[] );

/* build topic for Strip_CAM struct */
extern
void
Strip_CAM_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
