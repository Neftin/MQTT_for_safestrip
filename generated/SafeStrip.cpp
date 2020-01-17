
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

/* on_connect is called by thread each time we exeperience a server connection */

void
MQTT_SafeStrip_publisher::on_connect( int rc ) {
  MQTT_MESSAGE_DEBUG(
    "MQTT_SafeStrip_publisher::on_connect, rc = " << rc << ", id = " << this->id
  );
}

/* on_disconnect is called by thread each time we experience a server disconnection */

void
MQTT_SafeStrip_publisher::on_disconnect( int rc ) {
  MQTT_MESSAGE_DEBUG(
    "MQTT_SafeStrip_publisher::on_disconnect rc = " << rc << ", id = " << this->id
  );
}

/* on_publish is called each time a message succeed to be sent to broker. */
/* The parameter is the message id you can set when publish.              */
void
MQTT_SafeStrip_publisher::on_publish( int mid ) {
  MQTT_MESSAGE_DEBUG(
    "MQTT_SafeStrip_publisher::on_publish, mid = " << mid << " id = " << this->id
  );
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

bool
MQTT_SafeStrip_publisher::publish(
  Strip_CAM const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[Strip_CAM_size];
  Strip_CAM_MQTT_topic( &S, topic, 1000 );
  Strip_CAM_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    Strip_CAM_size,
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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

bool
MQTT_SafeStrip_publisher::publish(
  ParkingStatus const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[ParkingStatus_size];
  ParkingStatus_MQTT_topic( &S, topic, 1000 );
  ParkingStatus_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    ParkingStatus_size,
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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

bool
MQTT_SafeStrip_publisher::publish(
  ParkingEvent const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[ParkingEvent_size];
  ParkingEvent_MQTT_topic( &S, topic, 1000 );
  ParkingEvent_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    ParkingEvent_size,
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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

bool
MQTT_SafeStrip_publisher::publish(
  ParkingOutput const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[ParkingOutput_size];
  ParkingOutput_MQTT_topic( &S, topic, 1000 );
  ParkingOutput_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    ParkingOutput_size,
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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

bool
MQTT_SafeStrip_publisher::publish(
  EnvironmentData const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[EnvironmentData_size];
  EnvironmentData_MQTT_topic( &S, topic, 1000 );
  EnvironmentData_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    EnvironmentData_size,
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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

bool
MQTT_SafeStrip_publisher::publish(
  SetCodriverParameters const & S, int * mid
) {
  char    topic[1000];
  uint8_t buffer[SetCodriverParameters_size];
  SetCodriverParameters_MQTT_topic( &S, topic, 1000 );
  SetCodriverParameters_to_buffer( &S, buffer );
  int ret = this->mosqpp::mosquittopp::publish(
    mid,
    topic,
    SetCodriverParameters_size,
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
  /*
  case MOSQ_ERR_MALFORMED_UTF8:      
    std::cout << "publish SafeStrip: malformed utf8\n";
    break; 
  */
  default:
    std::cout << "publish SafeStrip: return = " << ret << "\n";
  }
  return ret == MOSQ_ERR_SUCCESS;
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
    Strip_CAM_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    MAPEM_message_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    HMI_activations_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    HMIinputsByApp_active_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    HMIinputsByApp_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    FirstTrajectoryMotorPrimitivesParameters_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    ManouevreTypes_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    StrainGauge_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    AutomationLevel_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    ParkingStatus_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    ParkingEvent_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    ParkingOutput_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    VirtualToll_input_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    VirtualToll_output_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    EnvironmentData_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
    SetCodriverParameters_MQTT_alltopics( topic, 1000 );
    this->subscribe( nullptr, topic );
  } else {
    std::cerr << "Connect failed\n";
  }
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::on_message(
  const struct mosquitto_message *message
) {
  uint8_t * ptr = static_cast<uint8_t *>(message->payload);
  if (!message->payloadlen) {
    std::cerr << "Skipping empty payload!\n";
  } else if ( HostVehicle_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_HostVehicle( ptr, &this->HostVehicle_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    HostVehicle_print( &HostVehicle_data );
    #endif
  } else if ( CAM_message_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_CAM_message( ptr, &this->CAM_message_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    CAM_message_print( &CAM_message_data );
    #endif
  } else if ( DENM_message_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_DENM_message( ptr, &this->DENM_message_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    DENM_message_print( &DENM_message_data );
    #endif
  } else if ( Strip_CAM_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_Strip_CAM( ptr, &this->Strip_CAM_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    Strip_CAM_print( &Strip_CAM_data );
    #endif
  } else if ( MAPEM_message_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_MAPEM_message( ptr, &this->MAPEM_message_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    MAPEM_message_print( &MAPEM_message_data );
    #endif
  } else if ( HMI_activations_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_HMI_activations( ptr, &this->HMI_activations_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    HMI_activations_print( &HMI_activations_data );
    #endif
  } else if ( HMIinputsByApp_active_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_HMIinputsByApp_active( ptr, &this->HMIinputsByApp_active_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    HMIinputsByApp_active_print( &HMIinputsByApp_active_data );
    #endif
  } else if ( HMIinputsByApp_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_HMIinputsByApp( ptr, &this->HMIinputsByApp_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    HMIinputsByApp_print( &HMIinputsByApp_data );
    #endif
  } else if ( FirstTrajectoryMotorPrimitivesParameters_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_FirstTrajectoryMotorPrimitivesParameters( ptr, &this->FirstTrajectoryMotorPrimitivesParameters_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    FirstTrajectoryMotorPrimitivesParameters_print( &FirstTrajectoryMotorPrimitivesParameters_data );
    #endif
  } else if ( ManouevreTypes_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_ManouevreTypes( ptr, &this->ManouevreTypes_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    ManouevreTypes_print( &ManouevreTypes_data );
    #endif
  } else if ( StrainGauge_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_StrainGauge( ptr, &this->StrainGauge_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    StrainGauge_print( &StrainGauge_data );
    #endif
  } else if ( AutomationLevel_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_AutomationLevel( ptr, &this->AutomationLevel_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    AutomationLevel_print( &AutomationLevel_data );
    #endif
  } else if ( ParkingStatus_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_ParkingStatus( ptr, &this->ParkingStatus_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    ParkingStatus_print( &ParkingStatus_data );
    #endif
  } else if ( ParkingEvent_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_ParkingEvent( ptr, &this->ParkingEvent_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    ParkingEvent_print( &ParkingEvent_data );
    #endif
  } else if ( ParkingOutput_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_ParkingOutput( ptr, &this->ParkingOutput_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    ParkingOutput_print( &ParkingOutput_data );
    #endif
  } else if ( VirtualToll_input_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_VirtualToll_input( ptr, &this->VirtualToll_input_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    VirtualToll_input_print( &VirtualToll_input_data );
    #endif
  } else if ( VirtualToll_output_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_VirtualToll_output( ptr, &this->VirtualToll_output_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    VirtualToll_output_print( &VirtualToll_output_data );
    #endif
  } else if ( EnvironmentData_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_EnvironmentData( ptr, &this->EnvironmentData_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    EnvironmentData_print( &EnvironmentData_data );
    #endif
  } else if ( SetCodriverParameters_MQTT_compare( message->topic ) == 0 ) {
    MQTT_MESSAGE_DEBUG("MQTT_SafeStrip_subscriber::on_message TOPIC: " << message->topic );
    /* Add mutex for sync */
    buffer_to_SetCodriverParameters( ptr, &this->SetCodriverParameters_data );
    /* Add mutex for sync */
    #ifdef DEBUG
    SetCodriverParameters_print( &SetCodriverParameters_data );
    #endif
  } else {
    std::cerr << "unmanaged topic " << message->topic << '\n';
  }
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_HostVehicle( HostVehicle & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->HostVehicle_data, sizeof( HostVehicle ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_CAM_message( CAM_message & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->CAM_message_data, sizeof( CAM_message ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_DENM_message( DENM_message & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->DENM_message_data, sizeof( DENM_message ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_Strip_CAM( Strip_CAM & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->Strip_CAM_data, sizeof( Strip_CAM ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_MAPEM_message( MAPEM_message & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->MAPEM_message_data, sizeof( MAPEM_message ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_HMI_activations( HMI_activations & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->HMI_activations_data, sizeof( HMI_activations ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_HMIinputsByApp_active( HMIinputsByApp_active & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->HMIinputsByApp_active_data, sizeof( HMIinputsByApp_active ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_HMIinputsByApp( HMIinputsByApp & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->HMIinputsByApp_data, sizeof( HMIinputsByApp ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_FirstTrajectoryMotorPrimitivesParameters( FirstTrajectoryMotorPrimitivesParameters & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->FirstTrajectoryMotorPrimitivesParameters_data, sizeof( FirstTrajectoryMotorPrimitivesParameters ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_ManouevreTypes( ManouevreTypes & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->ManouevreTypes_data, sizeof( ManouevreTypes ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_StrainGauge( StrainGauge & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->StrainGauge_data, sizeof( StrainGauge ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_AutomationLevel( AutomationLevel & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->AutomationLevel_data, sizeof( AutomationLevel ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_ParkingStatus( ParkingStatus & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->ParkingStatus_data, sizeof( ParkingStatus ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_ParkingEvent( ParkingEvent & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->ParkingEvent_data, sizeof( ParkingEvent ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_ParkingOutput( ParkingOutput & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->ParkingOutput_data, sizeof( ParkingOutput ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_VirtualToll_input( VirtualToll_input & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->VirtualToll_input_data, sizeof( VirtualToll_input ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_VirtualToll_output( VirtualToll_output & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->VirtualToll_output_data, sizeof( VirtualToll_output ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_EnvironmentData( EnvironmentData & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->EnvironmentData_data, sizeof( EnvironmentData ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void
MQTT_SafeStrip_subscriber::get_last_SetCodriverParameters( SetCodriverParameters & S ) const
{
  /* Add mutex for sync */
  std::memcpy( &S, &this->SetCodriverParameters_data, sizeof( SetCodriverParameters ) );
  /* Add mutex for sync */
}


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

/* EOF: SafeStrip.cpp */
