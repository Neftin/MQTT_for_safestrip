
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
#include "Strip_CAM.h"
#include "MAPEM_message.h"
#include "HMI_activations.h"
#include "HMIinputsByApp_active.h"
#include "HMIinputsByApp.h"
#include "FirstTrajectoryMotorPrimitivesParameters.h"
#include "ManouevreTypes.h"
#include "StrainGauge.h"
#include "AutomationLevel.h"
#include "ParkingStatus.h"
#include "ParkingEvent.h"
#include "ParkingOutput.h"
#include "VirtualToll_input.h"
#include "VirtualToll_output.h"
#include "EnvironmentData.h"

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
  bool publish( Strip_CAM const & S, int * mid = nullptr );
  bool publish( MAPEM_message const & S, int * mid = nullptr );
  bool publish( HMI_activations const & S, int * mid = nullptr );
  bool publish( HMIinputsByApp_active const & S, int * mid = nullptr );
  bool publish( HMIinputsByApp const & S, int * mid = nullptr );
  bool publish( FirstTrajectoryMotorPrimitivesParameters const & S, int * mid = nullptr );
  bool publish( ManouevreTypes const & S, int * mid = nullptr );
  bool publish( StrainGauge const & S, int * mid = nullptr );
  bool publish( AutomationLevel const & S, int * mid = nullptr );
  bool publish( ParkingStatus const & S, int * mid = nullptr );
  bool publish( ParkingEvent const & S, int * mid = nullptr );
  bool publish( ParkingOutput const & S, int * mid = nullptr );
  bool publish( VirtualToll_input const & S, int * mid = nullptr );
  bool publish( VirtualToll_output const & S, int * mid = nullptr );
  bool publish( EnvironmentData const & S, int * mid = nullptr );
};


class MQTT_SafeStrip_subscriber : public mosqpp::mosquittopp {
  HostVehicle HostVehicle_data;
  CAM_message CAM_message_data;
  DENM_message DENM_message_data;
  Strip_CAM Strip_CAM_data;
  MAPEM_message MAPEM_message_data;
  HMI_activations HMI_activations_data;
  HMIinputsByApp_active HMIinputsByApp_active_data;
  HMIinputsByApp HMIinputsByApp_data;
  FirstTrajectoryMotorPrimitivesParameters FirstTrajectoryMotorPrimitivesParameters_data;
  ManouevreTypes ManouevreTypes_data;
  StrainGauge StrainGauge_data;
  AutomationLevel AutomationLevel_data;
  ParkingStatus ParkingStatus_data;
  ParkingEvent ParkingEvent_data;
  ParkingOutput ParkingOutput_data;
  VirtualToll_input VirtualToll_input_data;
  VirtualToll_output VirtualToll_output_data;
  EnvironmentData EnvironmentData_data;
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
  get_last_Strip_CAM( Strip_CAM & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_MAPEM_message( MAPEM_message & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_HMI_activations( HMI_activations & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_HMIinputsByApp_active( HMIinputsByApp_active & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_HMIinputsByApp( HMIinputsByApp & S ) const;


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
  get_last_ParkingStatus( ParkingStatus & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_ParkingEvent( ParkingEvent & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_ParkingOutput( ParkingOutput & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_VirtualToll_input( VirtualToll_input & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_VirtualToll_output( VirtualToll_output & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  void
  get_last_EnvironmentData( EnvironmentData & S ) const;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

};

#endif

// EOF: SafeStrip.hpp
