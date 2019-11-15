
/*\
  Automatically generated
\*/

#ifndef HMIINPUTSBYAPP_H
#define HMIINPUTSBYAPP_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for HMIinputsByApp */
typedef struct {
  uint64_t UTC_time;                   /* MISSING */
  uint32_t OutputID;                   /* MISSING */
  uint32_t StationID;                  /* MISSING */
  uint8_t  WarningLevel;               /* MISSING */
  double   J0f;                        /* MISSING */
  double   TargetDistancef;            /* MISSING */
  double   TargetSpeedf;               /* MISSING */
  int32_t  TargetClassf;               /* MISSING */
  uint8_t  TargetComingDirection;      /* MISSING */
} HMIinputsByApp;

/* size of the serialized version of struct HMIinputsByApp */
#define HMIinputsByApp_size  46
#define HMIinputsByApp_n_fields 9


/* print HMIinputsByApp struct on stdio */
extern
void
buffer_to_HMIinputsByApp( uint8_t const buffer[], HMIinputsByApp * S );

/* serialize HMIinputsByApp struct to buffer */
extern
void
HMIinputsByApp_to_buffer( HMIinputsByApp const * S, uint8_t buffer[] );

/* get buffer and un-serialize to HMIinputsByApp struct */
extern
void
HMIinputsByApp_print( HMIinputsByApp const * S );

/* build topic for HMIinputsByApp struct */
extern
void
HMIinputsByApp_MQTT_topic( HMIinputsByApp const * S, char topic[], int topic_len );

/* check topic for HMIinputsByApp struct */
extern
int
HMIinputsByApp_MQTT_compare( char const topic[] );

/* build topic for HMIinputsByApp struct */
extern
void
HMIinputsByApp_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
