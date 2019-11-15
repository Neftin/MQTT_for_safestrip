
/*\
  Automatically generated
\*/

#ifndef HMIINPUTSBYAPP_ACTIVE_H
#define HMIINPUTSBYAPP_ACTIVE_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for HMIinputsByApp_active */
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
} HMIinputsByApp_active;

/* size of the serialized version of struct HMIinputsByApp_active */
#define HMIinputsByApp_active_size  46
#define HMIinputsByApp_active_n_fields 9


/* print HMIinputsByApp_active struct on stdio */
extern
void
buffer_to_HMIinputsByApp_active( uint8_t const buffer[], HMIinputsByApp_active * S );

/* serialize HMIinputsByApp_active struct to buffer */
extern
void
HMIinputsByApp_active_to_buffer( HMIinputsByApp_active const * S, uint8_t buffer[] );

/* get buffer and un-serialize to HMIinputsByApp_active struct */
extern
void
HMIinputsByApp_active_print( HMIinputsByApp_active const * S );

/* build topic for HMIinputsByApp_active struct */
extern
void
HMIinputsByApp_active_MQTT_topic( HMIinputsByApp_active const * S, char topic[], int topic_len );

/* check topic for HMIinputsByApp_active struct */
extern
int
HMIinputsByApp_active_MQTT_compare( char const topic[] );

/* build topic for HMIinputsByApp_active struct */
extern
void
HMIinputsByApp_active_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
