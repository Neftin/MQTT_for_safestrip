
/*\
  Automatically generated
\*/

#ifndef SAFESTRIP_HH
#define SAFESTRIP_HH

#include "buffer_defines.h"
#include <mosquitto.h>
#include <mosquittopp.h>
#include <string>
#include <iostream>

#ifdef DEBUG
  #define MQTT_MESSAGE_DEBUG(A) std::cerr << A << '\n'
#else
  #define MQTT_MESSAGE_DEBUG(A)
#endif

#include "HostVehicle.h"
#include "CAM_message.h"
#include "DENM_message.h"
#include "MAPEM_message.h"
#include "DSS_inputs.h"
#include "HMI_activations.h"
#include "HMI_inputs.h"
#include "HMIinputsByApp.h"
#include "ObstacleInteractionData.h"
#include "FirstTrajectoryMotorPrimitivesParameters.h"
#include "ManouevreTypes.h"
#include "StrainGauge.h"
#include "AutomationLevel.h"
#include "ParkingApplication.h"
#include "VirtualToll.h"
#include "VMS_VDS.h"
#include "RoadDataFrictionInputs.h"

class MQTT_SafeStrip_publisher : public mosqpp::mosquittopp {
private:
  std::string id;
  int         qos;

  virtual void on_connect(int rc);
  virtual void on_disconnect(int rc);
  virtual void on_publish(int mid);

public:

  MQTT_SafeStrip_publisher( char const id[], bool clean_session = true);

  virtual ~MQTT_SafeStrip_publisher();

  using mosqpp::mosquittopp::connect;

  bool publish( HostVehicle const & S, int * mid = nullptr );
  bool publish( CAM_message const & S, int * mid = nullptr );
  bool publish( DENM_message const & S, int * mid = nullptr );
  bool publish( MAPEM_message const & S, int * mid = nullptr );
  bool publish( DSS_inputs const & S, int * mid = nullptr );
  bool publish( HMI_activations const & S, int * mid = nullptr );
  bool publish( HMI_inputs const & S, int * mid = nullptr );
  bool publish( HMIinputsByApp const & S, int * mid = nullptr );
  bool publish( ObstacleInteractionData const & S, int * mid = nullptr );
  bool publish( FirstTrajectoryMotorPrimitivesParameters const & S, int * mid = nullptr );
  bool publish( ManouevreTypes const & S, int * mid = nullptr );
  bool publish( StrainGauge const & S, int * mid = nullptr );
  bool publish( AutomationLevel const & S, int * mid = nullptr );
  bool publish( ParkingApplication const & S, int * mid = nullptr );
  bool publish( VirtualToll const & S, int * mid = nullptr );
  bool publish( VMS_VDS const & S, int * mid = nullptr );
  bool publish( RoadDataFrictionInputs const & S, int * mid = nullptr );
};


class MQTT_SafeStrip_subscriber : public mosqpp::mosquittopp {
  HostVehicle HostVehicle_data;
  CAM_message CAM_message_data;
  DENM_message DENM_message_data;
  MAPEM_message MAPEM_message_data;
  DSS_inputs DSS_inputs_data;
  HMI_activations HMI_activations_data;
  HMI_inputs HMI_inputs_data;
  HMIinputsByApp HMIinputsByApp_data;
  ObstacleInteractionData ObstacleInteractionData_data;
  FirstTrajectoryMotorPrimitivesParameters FirstTrajectoryMotorPrimitivesParameters_data;
  ManouevreTypes ManouevreTypes_data;
  StrainGauge StrainGauge_data;
  AutomationLevel AutomationLevel_data;
  ParkingApplication ParkingApplication_data;
  VirtualToll VirtualToll_data;
  VMS_VDS VMS_VDS_data;
  RoadDataFrictionInputs RoadDataFrictionInputs_data;
public:
  MQTT_SafeStrip_subscriber( char const id[], bool clean_session = true)
  : mosqpp::mosquittopp( id, clean_session )
  {}

  virtual
  ~MQTT_SafeStrip_subscriber()
  {}

  using mosqpp::mosquittopp::connect;

  virtual
  void
  on_connect( int result );

  virtual
  void
  on_message( const struct mosquitto_message *message );


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_HostVehicle( HostVehicle & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_CAM_message( CAM_message & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_DENM_message( DENM_message & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_MAPEM_message( MAPEM_message & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_DSS_inputs( DSS_inputs & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_HMI_activations( HMI_activations & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_HMI_inputs( HMI_inputs & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_HMIinputsByApp( HMIinputsByApp & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_ObstacleInteractionData( ObstacleInteractionData & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_FirstTrajectoryMotorPrimitivesParameters( FirstTrajectoryMotorPrimitivesParameters & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_ManouevreTypes( ManouevreTypes & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_StrainGauge( StrainGauge & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_AutomationLevel( AutomationLevel & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_ParkingApplication( ParkingApplication & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_VirtualToll( VirtualToll & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_VMS_VDS( VMS_VDS & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_RoadDataFrictionInputs( RoadDataFrictionInputs & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

};

#endif

// EOF: SafeStrip.hpp
