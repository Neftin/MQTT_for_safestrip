#include "SafeStrip.hpp"
#include <iostream>
#include <chrono>
#include <thread>
//#include <openssl/ssl.h>
//#include <openssl/err.h>

using namespace std;

static bool _running = true;
void
clean_exit( int signum ) {
  cout << "Interrupt signal (" << signum << ") received.\n";
  // cleanup and close up stuff here
  // terminate program
  _running = false;
  exit(signum);
}

int
main() {

  MQTT_SafeStrip_subscriber mqtt_subscriber("subscriber");


  int debug;

  // Set the security options
  const char* server_address = "93.62.253.212";
  const char* username       = "safestrip";
  const char* password       = "S@f3str1p";
  const char* protocol       = "tlsv1.2";

  mqtt_subscriber.username_pw_set( username , password );
  mqtt_subscriber.tls_set("ca.crt", NULL, NULL, NULL, NULL); // return 0 no problem
  mqtt_subscriber.tls_insecure_set( true );
  debug = mqtt_subscriber.tls_opts_set( 0 , protocol , NULL );
  
  //mqtt.connect( "192.168.0.106", 1883, 60 );
  debug = mqtt_subscriber.connect( server_address , 8883 , 60 );
  cout << "Connect ... \n" << debug << "\n";

  //  __
  // |  |   ___ ___ ___
  // |  |__| . | . | . |
  // |_____|___|___|  _|
  //               |_|
  cout << "Entering loop.\n";
  mqtt_subscriber.loop_start();
  cout << "Running\n";
  while (_running)
    std::this_thread::sleep_for(std::chrono::milliseconds(1));

  cout << "Clean exit\n";

  return 0;
}
/*
 * Parameters:
 *  mosq -        a valid mosquitto instance.
 *	cert_reqs -   an integer defining the verification requirements the client
 *	              will impose on the server. This can be one of:
 *	              * SSL_VERIFY_NONE (0): the server will not be verified in any way.
 *	              * SSL_VERIFY_PEER (1): the server certificate will be verified
 *	                and the connection aborted if the verification fails.
 *	              The default and recommended value is SSL_VERIFY_PEER. Using
 *	              SSL_VERIFY_NONE provides no security.
 *	tls_version - the version of the SSL/TLS protocol to use as a string. If NULL,
 *	              the default value is used. The default value and the
 *	              available values depend on the version of openssl that the
 *	              library was compiled against. For openssl >= 1.0.1, the
 *	              available options are tlsv1.2, tlsv1.1 and tlsv1, with tlv1.2
 *	              as the default. For openssl < 1.0.1, only tlsv1 is available.
 *	ciphers -     a string describing the ciphers available for use. See the
 *	              "openssl ciphers" tool for more information. If NULL, the
 *	              default ciphers will be used.
 */
