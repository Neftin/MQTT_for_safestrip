
/*\
  Automatically generated
\*/

#ifndef CAM_MESSAGE_H
#define CAM_MESSAGE_H

#ifdef __cplusplus
  extern "C" {
#endif

#include<stdio.h> /* Necessary to recognize FILE type */

/* C structure for CAM_message */
typedef struct {
  uint64_t UTC_time;                                            /* MISSING */
  uint32_t v2x_cam_header_msgID;                                /* MISSING */
  uint32_t v2x_cam_header_originationStationID;                 /* MISSING */
  uint16_t v2x_cam_GenerationDeltaTime;                         /* MISSING */
  uint8_t  v2x_cam_StationType;                                 /* MISSING */
  int32_t  v2x_cam_Latitude;                                    /* MISSING */
  int32_t  v2x_cam_Longitude;                                   /* MISSING */
  int32_t  v2x_cam_ConfidenceEllipse_semiMajor;                 /* MISSING */
  int32_t  v2x_cam_ConfidenceEllipse_semiMinor;                 /* MISSING */
  int32_t  v2x_cam_ConfidenceEllipse_semiMajorOrientation;      /* MISSING */
  int32_t  v2x_cam_Altitude;                                    /* MISSING */
  uint16_t v2x_cam_Heading;                                     /* MISSING */
  uint16_t v2x_cam_Speed;                                       /* MISSING */
  uint16_t v2x_cam_VehicleLength;                               /* MISSING */
  uint8_t  v2x_cam_VehicleWidth;                                /* MISSING */
  int16_t  v2x_cam_LongitudinalAcceleration;                    /* MISSING */
  int16_t  v2x_cam_YawRate;                                     /* MISSING */
  uint8_t  v2x_cam_AccelerationControl;                         /* MISSING */
  int16_t  v2x_cam_SteeringWheelAngle;                          /* MISSING */
  int16_t  v2x_cam_LateralAcceleration;                         /* MISSING */
  uint16_t v2x_cam_VehicleRole;                                 /* MISSING */
  uint8_t  v2x_cam_ExteriorLights_status;                       /* MISSING */
} CAM_message;

/* size of the serialized version of struct CAM_message */
#define CAM_message_size  62
#define CAM_message_n_fields 22


/* print CAM_message struct on stdio */
extern
void
buffer_to_CAM_message( uint8_t const buffer[], CAM_message * S );

/* serialize CAM_message struct to buffer */
extern
void
CAM_message_to_buffer( CAM_message const * S, uint8_t buffer[] );

/* get buffer and un-serialize to CAM_message struct */
extern
void
CAM_message_print( CAM_message const * S );

/* get buffer and un-serialize to CAM_message struct */
extern
void
CAM_message_fileprint( CAM_message const * S , FILE * file_stream );

/* build topic for CAM_message struct */
extern
void
CAM_message_MQTT_topic( CAM_message const * S, char topic[], int topic_len );

/* check topic for CAM_message struct */
extern
int
CAM_message_MQTT_compare( char const topic[] );

/* build topic for CAM_message struct */
extern
void
CAM_message_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
