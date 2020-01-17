
/*\
  Automatically generated
\*/

#ifndef MAPEM_MESSAGE_H
#define MAPEM_MESSAGE_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for MAPEM_message */
typedef struct {
  uint64_t UTC_time;                                                        /* MISSING */
  uint32_t v2x_header_msgID;                                                /* MISSING */
  uint32_t v2x_header_originationStationID;                                 /* MISSING */
  uint8_t  v2x_map_intersection_name;                                       /* MISSING */
  uint32_t v2x_map_intersection_id;                                         /* MISSING */
  int32_t  v2x_map_intersection_refLatitude;                                /* MISSING */
  int32_t  v2x_map_intersection_refLongitude;                               /* MISSING */
  int32_t  v2x_map_intersection_refAltitude;                                /* MISSING */
  int32_t  v2x_map_intersection_laneWidth;                                  /* MISSING */
  uint8_t  v2x_map_intersection_speedLimitType;                             /* MISSING */
  int32_t  v2x_map_intersection_speedLimitValue;                            /* MISSING */
  uint8_t  v2x_map_intersection_LaneSet_ID[16];                             /* MISSING */
  uint8_t  v2x_map_intersection_LaneSet_approach_ID[16];                    /* MISSING */
  uint8_t  v2x_map_intersection_LaneSet_laneAttributes_directionalUse[16];  /* MISSING */
  int32_t  v2x_map_intersection_LaneSet_nodeList_Xoffset[160];              /* MISSING */
  int32_t  v2x_map_intersection_LaneSet_nodeList_Yoffset[160];              /* MISSING */
  uint16_t v2x_map_intersection_LaneSet_laneAttributes_LaneTypeValue[16];   /* MISSING */
  uint8_t  v2x_map_intersection_LaneType_ID[16];                            /* MISSING */
  uint16_t v2x_map_intersection_ConnectingLane_allowedManeuvers[96];        /* MISSING */
  uint8_t  v2x_map_intersection_LaneSet_connectingLaneID[96];               /* MISSING */
  uint8_t  v2x_map_intersection_LaneSet_connectingLaneSignalGroup[96];      /* MISSING */
} MAPEM_message;

/* size of the serialized version of struct MAPEM_message */
#define MAPEM_message_size  1802
#define MAPEM_message_n_fields 21


/* print MAPEM_message struct on stdio */
extern
void
buffer_to_MAPEM_message( uint8_t const buffer[], MAPEM_message * S );

/* serialize MAPEM_message struct to buffer */
extern
void
MAPEM_message_to_buffer( MAPEM_message const * S, uint8_t buffer[] );

/* get buffer and un-serialize to MAPEM_message struct */
extern
void
MAPEM_message_print( MAPEM_message const * S );

/* get buffer and un-serialize to MAPEM_message struct */
extern
void
MAPEM_message_fileprint( MAPEM_message const * S , FILE * file_stream );

/* build topic for MAPEM_message struct */
extern
void
MAPEM_message_MQTT_topic( MAPEM_message const * S, char topic[], int topic_len );

/* check topic for MAPEM_message struct */
extern
int
MAPEM_message_MQTT_compare( char const topic[] );

/* build topic for MAPEM_message struct */
extern
void
MAPEM_message_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
