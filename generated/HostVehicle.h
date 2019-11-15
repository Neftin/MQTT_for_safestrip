
/*\
  Automatically generated
\*/

#ifndef HOSTVEHICLE_H
#define HOSTVEHICLE_H

#ifdef __cplusplus
  extern "C" {
#endif

/* C structure for HostVehicle */
typedef struct {
  uint64_t UTC_time;                              /* MISSING */
  double   Speed_vehicle_network;                 /* MISSING */
  double   LongAcc_vehicle_network;               /* MISSING */
  double   LatAcc_vehicle_network;                /* MISSING */
  double   YawRate_vehicle_network;               /* MISSING */
  double   SteerWheel_vehicle_network;            /* MISSING */
  double   SteerWheelSpeed_vehicle_network;       /* MISSING */
  double   BrakePressure_vehicle_network;         /* MISSING */
  double   GasPedPos_vehicle_network;             /* MISSING */
  uint8_t  BrakePedalSwitch_vehicle_network;      /* MISSING */
  int32_t  VehicleType;                           /* MISSING */
  double   VehicleBarLongPos;                     /* MISSING */
} HostVehicle;

/* size of the serialized version of struct HostVehicle */
#define HostVehicle_size  85
#define HostVehicle_n_fields 12


/* print HostVehicle struct on stdio */
extern
void
buffer_to_HostVehicle( uint8_t const buffer[], HostVehicle * S );

/* serialize HostVehicle struct to buffer */
extern
void
HostVehicle_to_buffer( HostVehicle const * S, uint8_t buffer[] );

/* get buffer and un-serialize to HostVehicle struct */
extern
void
HostVehicle_print( HostVehicle const * S );

/* build topic for HostVehicle struct */
extern
void
HostVehicle_MQTT_topic( HostVehicle const * S, char topic[], int topic_len );

/* check topic for HostVehicle struct */
extern
int
HostVehicle_MQTT_compare( char const topic[] );

/* build topic for HostVehicle struct */
extern
void
HostVehicle_MQTT_alltopics( char topic[], int topic_len );
#ifdef __cplusplus
};
#endif

#endif
