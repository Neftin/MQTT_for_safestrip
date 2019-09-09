
/*\
  Automatically generated
\*/

#include <iostream>
#include <cstring>
#include "SafeStrip.hpp"

MQTT_SafeStrip_publisher::MQTT_SafeStrip_publisher( char const _id[], bool clean_session )
: mosqpp::mosquittopp( _id, clean_session )
, qos(0)
{
  id = _id == nullptr ? "NULL" : _id;
  mosqpp::lib_init();
}

MQTT_SafeStrip_publisher::~MQTT_SafeStrip_publisher() {
  mosqpp::lib_cleanup();
}

// on_connect is called by thread each time we exeperience a server connection

void
MQTT_SafeStrip_publisher::on_connect( int rc ) {
  MQTT_MESSAGE_DEBUG(
    "MQTT_SafeStrip_publisher::on_connect, rc = " << rc << ", id = " << this->id
  );
}

// on_disconnect is called by thread each time we experience a server disconnection

void
MQTT_SafeStrip_publisher::on_disconnect( int rc ) {
  MQTT_MESSAGE_DEBUG(
    "MQTT_SafeStrip_publisher::on_disconnect rc = " << rc << ", id = " << this->id
  );
}

// on_publish is called each time a message succeed to be sent to broker.
// The parameter is the message id you can set when publish.
void
MQTT_SafeStrip_publisher::on_publish( int mid ) {
  MQTT_MESSAGE_DEBUG(
    "MQTT_SafeStrip_publisher::on_publish, mid = " << mid << " id = " << this->id
  );
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  HostVehicle const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[HostVehicle_size];
  HostVehicle_MQTT_topic( &S, topic, 1000 );
  HostVehicle_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    HostVehicle_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  CAM_message const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[CAM_message_size];
  CAM_message_MQTT_topic( &S, topic, 1000 );
  CAM_message_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    CAM_message_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  DENM_message const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[DENM_message_size];
  DENM_message_MQTT_topic( &S, topic, 1000 );
  DENM_message_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    DENM_message_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  MAPEM_message const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[MAPEM_message_size];
  MAPEM_message_MQTT_topic( &S, topic, 1000 );
  MAPEM_message_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    MAPEM_message_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  DSS_inputs const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[DSS_inputs_size];
  DSS_inputs_MQTT_topic( &S, topic, 1000 );
  DSS_inputs_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    DSS_inputs_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  HMI_activations const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[HMI_activations_size];
  HMI_activations_MQTT_topic( &S, topic, 1000 );
  HMI_activations_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    HMI_activations_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  HMIinputsByApp_active const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[HMIinputsByApp_active_size];
  HMIinputsByApp_active_MQTT_topic( &S, topic, 1000 );
  HMIinputsByApp_active_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    HMIinputsByApp_active_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  HMIinputsByApp const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[HMIinputsByApp_size];
  HMIinputsByApp_MQTT_topic( &S, topic, 1000 );
  HMIinputsByApp_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    HMIinputsByApp_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  ObstacleInteractionData const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[ObstacleInteractionData_size];
  ObstacleInteractionData_MQTT_topic( &S, topic, 1000 );
  ObstacleInteractionData_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    ObstacleInteractionData_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  FirstTrajectoryMotorPrimitivesParameters const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[FirstTrajectoryMotorPrimitivesParameters_size];
  FirstTrajectoryMotorPrimitivesParameters_MQTT_topic( &S, topic, 1000 );
  FirstTrajectoryMotorPrimitivesParameters_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    FirstTrajectoryMotorPrimitivesParameters_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  ManouevreTypes const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[ManouevreTypes_size];
  ManouevreTypes_MQTT_topic( &S, topic, 1000 );
  ManouevreTypes_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    ManouevreTypes_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  StrainGauge const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[StrainGauge_size];
  StrainGauge_MQTT_topic( &S, topic, 1000 );
  StrainGauge_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    StrainGauge_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  AutomationLevel const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[AutomationLevel_size];
  AutomationLevel_MQTT_topic( &S, topic, 1000 );
  AutomationLevel_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    AutomationLevel_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  ParkingApplication const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[ParkingApplication_size];
  ParkingApplication_MQTT_topic( &S, topic, 1000 );
  ParkingApplication_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    ParkingApplication_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  VirtualToll_input const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[VirtualToll_input_size];
  VirtualToll_input_MQTT_topic( &S, topic, 1000 );
  VirtualToll_input_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    VirtualToll_input_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  VirtualToll_output const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[VirtualToll_output_size];
  VirtualToll_output_MQTT_topic( &S, topic, 1000 );
  VirtualToll_output_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    VirtualToll_output_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  VMS_VDS const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[VMS_VDS_size];
  VMS_VDS_MQTT_topic( &S, topic, 1000 );
  VMS_VDS_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    VMS_VDS_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

bool
MQTT_SafeStrip_publisher::publish(
  RoadDataFrictionInputs const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[RoadDataFrictionInputs_size];
  RoadDataFrictionInputs_MQTT_topic( &S, topic, 1000 );
  RoadDataFrictionInputs_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    RoadDataFrictionInputs_size,
    buffer,
    this->qos,
    false
  );
  switch ( ret ) {
  case MOSQ_ERR_SUCCESS:
    break;
  case MOSQ_ERR_INVAL:
    std::cout << "publish SafeStrip: the input parameters were invalid.\n";
    break;
  case MOSQ_ERR_NOMEM:
    std::cout << "publish SafeStrip: an out of memory condition occurred.";
    break;
  case MOSQ_ERR_NO_CONN:
    std::cout << "publish SafeStrip: the client isn’t connected to a broker.";
    break;
  case MOSQ_ERR_PROTOCOL:
    std::cout << "publish SafeStrip: there is a protocol error communicating with the broker.";
    break;
  case MOSQ_ERR_PAYLOAD_SIZE:
    std::cout << "publish SafeStrip: payloadlen is too large.";
    break;
  //case MOSQ_ERR_MALFORMED_UTF8:
  //  std::cout << "publish SafeStrip: malformed utf8\n";
  //  break;
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::on_connect( int result ) {
  if (!result) {
    char topic[1000];
    HostVehicle_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    CAM_message_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    DENM_message_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    MAPEM_message_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    DSS_inputs_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    HMI_activations_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    HMIinputsByApp_active_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    HMIinputsByApp_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    ObstacleInteractionData_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    FirstTrajectoryMotorPrimitivesParameters_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    ManouevreTypes_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    StrainGauge_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    AutomationLevel_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    ParkingApplication_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    VirtualToll_input_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    VirtualToll_output_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    VMS_VDS_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    RoadDataFrictionInputs_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
  } else {
    std::cerr << "Connect failed\n";
  }
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::on_message(
  const struct mosquitto_message *message
) {
  uint8_t * ptr = static_cast<uint8_t *>(message->payload);
  if (!message->payloadlen) {
    std::cerr << "Skipping empty payload!\n";
  } else if ( HostVehicle_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_HostVehicle( ptr, &this->HostVehicle_data );
    // Add mutex for sync
    #ifdef DEBUG
    HostVehicle_print( &HostVehicle_data );
    #endif
  } else if ( CAM_message_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_CAM_message( ptr, &this->CAM_message_data );
    // Add mutex for sync
    #ifdef DEBUG
    CAM_message_print( &CAM_message_data );
    #endif
  } else if ( DENM_message_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_DENM_message( ptr, &this->DENM_message_data );
    // Add mutex for sync
    #ifdef DEBUG
    DENM_message_print( &DENM_message_data );
    #endif
  } else if ( MAPEM_message_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_MAPEM_message( ptr, &this->MAPEM_message_data );
    // Add mutex for sync
    #ifdef DEBUG
    MAPEM_message_print( &MAPEM_message_data );
    #endif
  } else if ( DSS_inputs_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_DSS_inputs( ptr, &this->DSS_inputs_data );
    // Add mutex for sync
    #ifdef DEBUG
    DSS_inputs_print( &DSS_inputs_data );
    #endif
  } else if ( HMI_activations_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_HMI_activations( ptr, &this->HMI_activations_data );
    // Add mutex for sync
    #ifdef DEBUG
    HMI_activations_print( &HMI_activations_data );
    #endif
  } else if ( HMIinputsByApp_active_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_HMIinputsByApp_active( ptr, &this->HMIinputsByApp_active_data );
    // Add mutex for sync
    #ifdef DEBUG
    HMIinputsByApp_active_print( &HMIinputsByApp_active_data );
    #endif
  } else if ( HMIinputsByApp_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_HMIinputsByApp( ptr, &this->HMIinputsByApp_data );
    // Add mutex for sync
    #ifdef DEBUG
    HMIinputsByApp_print( &HMIinputsByApp_data );
    #endif
  } else if ( ObstacleInteractionData_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_ObstacleInteractionData( ptr, &this->ObstacleInteractionData_data );
    // Add mutex for sync
    #ifdef DEBUG
    ObstacleInteractionData_print( &ObstacleInteractionData_data );
    #endif
  } else if ( FirstTrajectoryMotorPrimitivesParameters_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_FirstTrajectoryMotorPrimitivesParameters( ptr, &this->FirstTrajectoryMotorPrimitivesParameters_data );
    // Add mutex for sync
    #ifdef DEBUG
    FirstTrajectoryMotorPrimitivesParameters_print( &FirstTrajectoryMotorPrimitivesParameters_data );
    #endif
  } else if ( ManouevreTypes_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_ManouevreTypes( ptr, &this->ManouevreTypes_data );
    // Add mutex for sync
    #ifdef DEBUG
    ManouevreTypes_print( &ManouevreTypes_data );
    #endif
  } else if ( StrainGauge_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_StrainGauge( ptr, &this->StrainGauge_data );
    // Add mutex for sync
    #ifdef DEBUG
    StrainGauge_print( &StrainGauge_data );
    #endif
  } else if ( AutomationLevel_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_AutomationLevel( ptr, &this->AutomationLevel_data );
    // Add mutex for sync
    #ifdef DEBUG
    AutomationLevel_print( &AutomationLevel_data );
    #endif
  } else if ( ParkingApplication_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_ParkingApplication( ptr, &this->ParkingApplication_data );
    // Add mutex for sync
    #ifdef DEBUG
    ParkingApplication_print( &ParkingApplication_data );
    #endif
  } else if ( VirtualToll_input_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_VirtualToll_input( ptr, &this->VirtualToll_input_data );
    // Add mutex for sync
    #ifdef DEBUG
    VirtualToll_input_print( &VirtualToll_input_data );
    #endif
  } else if ( VirtualToll_output_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_VirtualToll_output( ptr, &this->VirtualToll_output_data );
    // Add mutex for sync
    #ifdef DEBUG
    VirtualToll_output_print( &VirtualToll_output_data );
    #endif
  } else if ( VMS_VDS_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_VMS_VDS( ptr, &this->VMS_VDS_data );
    // Add mutex for sync
    #ifdef DEBUG
    VMS_VDS_print( &VMS_VDS_data );
    #endif
  } else if ( RoadDataFrictionInputs_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    // Add mutex for sync
    buffer_to_RoadDataFrictionInputs( ptr, &this->RoadDataFrictionInputs_data );
    // Add mutex for sync
    #ifdef DEBUG
    RoadDataFrictionInputs_print( &RoadDataFrictionInputs_data );
    #endif
  } else {
    std::cerr << "unmanaged topic " << message->topic << '\n';
  }
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_HostVehicle( HostVehicle & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->HostVehicle_data, sizeof( HostVehicle ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_CAM_message( CAM_message & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->CAM_message_data, sizeof( CAM_message ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_DENM_message( DENM_message & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->DENM_message_data, sizeof( DENM_message ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_MAPEM_message( MAPEM_message & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->MAPEM_message_data, sizeof( MAPEM_message ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_DSS_inputs( DSS_inputs & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->DSS_inputs_data, sizeof( DSS_inputs ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_HMI_activations( HMI_activations & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->HMI_activations_data, sizeof( HMI_activations ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_HMIinputsByApp_active( HMIinputsByApp_active & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->HMIinputsByApp_active_data, sizeof( HMIinputsByApp_active ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_HMIinputsByApp( HMIinputsByApp & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->HMIinputsByApp_data, sizeof( HMIinputsByApp ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_ObstacleInteractionData( ObstacleInteractionData & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->ObstacleInteractionData_data, sizeof( ObstacleInteractionData ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_FirstTrajectoryMotorPrimitivesParameters( FirstTrajectoryMotorPrimitivesParameters & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->FirstTrajectoryMotorPrimitivesParameters_data, sizeof( FirstTrajectoryMotorPrimitivesParameters ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_ManouevreTypes( ManouevreTypes & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->ManouevreTypes_data, sizeof( ManouevreTypes ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_StrainGauge( StrainGauge & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->StrainGauge_data, sizeof( StrainGauge ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_AutomationLevel( AutomationLevel & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->AutomationLevel_data, sizeof( AutomationLevel ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_ParkingApplication( ParkingApplication & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->ParkingApplication_data, sizeof( ParkingApplication ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_VirtualToll_input( VirtualToll_input & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->VirtualToll_input_data, sizeof( VirtualToll_input ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_VirtualToll_output( VirtualToll_output & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->VirtualToll_output_data, sizeof( VirtualToll_output ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_VMS_VDS( VMS_VDS & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->VMS_VDS_data, sizeof( VMS_VDS ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void
MQTT_SafeStrip_subscriber::get_last_RoadDataFrictionInputs( RoadDataFrictionInputs & S ) const
{
  // Add mutex for sync
  std::memcpy( &S, &this->RoadDataFrictionInputs_data, sizeof( RoadDataFrictionInputs ) );
  // Add mutex for sync
}


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

// EOF: SafeStrip.cpp
