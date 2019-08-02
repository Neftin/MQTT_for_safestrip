#include "SafeStrip.hpp"
#include <iostream>
#include <chrono>
#include <thread>

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

  cout << "Connect ... \n";
  //mqtt.connect( "192.168.0.106", 1883, 60 );
  mqtt_subscriber.connect( "127.0.0.1", 1883, 60 );

  AutomationLevel al;

  //  __
  // |  |   ___ ___ ___
  // |  |__| . | . | . |
  // |_____|___|___|  _|
  //               |_|
  cout << "Entering loop.\n";
  mqtt_subscriber.loop_start();
  cout << "Running\n";
  while (_running){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

     mqtt_subscriber.get_last_AutomationLevel(al);

    printf("this is your AL: %i\n",al.Automation_Level);
  }

  cout << "Clean exit\n";

  return 0;
}
