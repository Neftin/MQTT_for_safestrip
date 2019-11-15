
/*\
  Automatically generated
\*/

#ifndef MANOUEVRETYPES_H
#define MANOUEVRETYPES_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for ManouevreTypes */
typedef struct {
  uint64_t UTC_time;                     /* MISSING */
  int32_t  OutputID;                     /* MISSING */
  uint8_t  FirstManoeuverTypeLong;       /* MISSING */
  uint8_t  FirstManoeuverTypeLat;        /* MISSING */
  uint8_t  SecondManoeuverTypeLong;      /* MISSING */
  uint8_t  SecondManoeuverTypeLat;       /* MISSING */
} ManouevreTypes;

/* size of the serialized version of struct ManouevreTypes */
#define ManouevreTypes_size  16
#define ManouevreTypes_n_fields 6


/* print ManouevreTypes struct on stdio */
extern
void
buffer_to_ManouevreTypes( uint8_t const buffer[], ManouevreTypes * S );

/* serialize ManouevreTypes struct to buffer */
extern
void
ManouevreTypes_to_buffer( ManouevreTypes const * S, uint8_t buffer[] );

/* get buffer and un-serialize to ManouevreTypes struct */
extern
void
ManouevreTypes_print( ManouevreTypes const * S );

/* build topic for ManouevreTypes struct */
extern
void
ManouevreTypes_MQTT_topic( ManouevreTypes const * S, char topic[], int topic_len );

/* check topic for ManouevreTypes struct */
extern
int
ManouevreTypes_MQTT_compare( char const topic[] );

/* build topic for ManouevreTypes struct */
extern
void
ManouevreTypes_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
