
/*\
  Automatically generated
\*/

#ifndef DENM_MESSAGE_H
#define DENM_MESSAGE_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for DENM_message */
typedef struct {
  uint64_t UTC_time;                                                                        /* MISSING */
  uint32_t v2x_header_StationID;                                                            /* MISSING */
  uint32_t v2x_header_originationStationID;                                                 /* MISSING */
  uint16_t v2x_denm_sequenceNumber;                                                         /* MISSING */
  uint64_t v2x_denm_detectionTime;                                                          /* MISSING */
  int32_t  v2x_denm_eventPosition_latitude;                                                 /* MISSING */
  int32_t  v2x_denm_eventPosition_longitude;                                                /* MISSING */
  int32_t  v2x_denm_ConfidenceEllipse_semiMajor;                                            /* MISSING */
  int32_t  v2x_denm_ConfidenceEllipse_semiMinor;                                            /* MISSING */
  int32_t  v2x_denm_ConfidenceEllipse_semiMajorOrientation;                                 /* MISSING */
  int32_t  v2x_denm_eventPosition_altitude;                                                 /* MISSING */
  uint8_t  v2x_denm_relevanceDistance;                                                      /* MISSING */
  uint8_t  v2x_denm_relevanceTrafficDirection;                                              /* MISSING */
  int32_t  v2x_denm_validityDuration;                                                       /* MISSING */
  uint8_t  v2x_denm_stationType;                                                            /* MISSING */
  int32_t  v2x_denm_eventType_CauseCode;                                                    /* MISSING */
  int32_t  v2x_denm_eventType_SubCauseCode;                                                 /* MISSING */
  uint16_t v2x_denm_frictionCoefficient_value;                                              /* MISSING */
  uint16_t v2x_denm_frictionCoefficient_confidence;                                         /* MISSING */
  int32_t  v2x_denm_alacarte_LanePosition;                                                  /* MISSING */
  uint32_t v2x_denm_alacarte_RoadWorksContainerExtended_closedLanes_DrivingLaneStatus;      /* MISSING */
} DENM_message;

/* size of the serialized version of struct DENM_message */
#define DENM_message_size  77
#define DENM_message_n_fields 21


/* print DENM_message struct on stdio */
extern
void
buffer_to_DENM_message( uint8_t const buffer[], DENM_message * S );

/* serialize DENM_message struct to buffer */
extern
void
DENM_message_to_buffer( DENM_message const * S, uint8_t buffer[] );

/* get buffer and un-serialize to DENM_message struct */
extern
void
DENM_message_print( DENM_message const * S );

/* get buffer and un-serialize to DENM_message struct */
extern
void
DENM_message_fileprint( DENM_message const * S , FILE * file_stream );

/* build topic for DENM_message struct */
extern
void
DENM_message_MQTT_topic( DENM_message const * S, char topic[], int topic_len );

/* check topic for DENM_message struct */
extern
int
DENM_message_MQTT_compare( char const topic[] );

/* build topic for DENM_message struct */
extern
void
DENM_message_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
