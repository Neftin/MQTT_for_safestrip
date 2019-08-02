
/*\
  Automatically generated
\*/

#ifndef ROADDATAFRICTIONINPUTS_H
#define ROADDATAFRICTIONINPUTS_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for RoadDataFrictionInputs */
typedef struct {
  uint32_t StripID;                     /* ID_of_the_strip_0=RSB_ */
  uint32_t Fog;                         /* TO_BE_DEFINED */
  uint8_t  Road_type;                   /* Type_of_the_road,_(asphalt_or_not,_highway,_…),_TO_BE_DEFINED */
  uint8_t  ice;                         /* Ice_presence */
  int32_t  temperature;                 /* Temperature_by_sensor_of_the_strip */
  uint8_t  gas_type;                    /* type_of_chemicals_detected_(up_to_5):_Every_one_in_the_bitstring_is_the_type_of_gas_detetcted._TOP_BE_DEFINED */
  uint32_t gas_presence[5];             /* Gas_concentration */
  uint32_t humidity;                    /* Relative_humidity */
  uint8_t  Reported_surface_state;      /* 0_unavailable_1_Dry,_2_Moist,__3_Wet,_4_Snowy,5_Icy,6_Frosty,7_Moist_and_chemical,__8_Wet_and_chemical_(from_VAISALA_SENSOR_DATA) */
  uint8_t  water_layer;                 /* thickness_of_the_layer,_it_saturates_at_7_millimeters_0_=_no_presence */
  uint8_t  show_layer;                  /* thickness_of_the_layer,_it_saturates_at_7_millimeters_0_=_no_presence */
  uint8_t  ice_layer;                   /* thickness_of_the_layer,_it_saturates_at_7_millimeters_0_=_no_presence */
} RoadDataFrictionInputs;

/* size of the serialized version of struct RoadDataFrictionInputs */
#define RoadDataFrictionInputs_size 43


/* print RoadDataFrictionInputs struct on stdio */
extern
void
buffer_to_RoadDataFrictionInputs( uint8_t const buffer[], RoadDataFrictionInputs * S );

/* serialize RoadDataFrictionInputs struct to buffer */
extern
void
RoadDataFrictionInputs_to_buffer( RoadDataFrictionInputs const * S, uint8_t buffer[] );

/* get buffer and un-serialize to RoadDataFrictionInputs struct */
extern
void
RoadDataFrictionInputs_print( RoadDataFrictionInputs const * S );

/* build topic for RoadDataFrictionInputs struct */
extern
void
RoadDataFrictionInputs_MQTT_topic( RoadDataFrictionInputs const * S, char topic[], int topic_len );

/* check topic for RoadDataFrictionInputs struct */
extern
int
RoadDataFrictionInputs_MQTT_compare( char const topic[] );

/* build topic for RoadDataFrictionInputs struct */
extern
void
RoadDataFrictionInputs_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
