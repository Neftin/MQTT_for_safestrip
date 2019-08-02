#include "SafeStrip.hpp"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int
main() {

  MQTT_SafeStrip_publisher  mqtt_publisher("publisher");

  cout << "Connect ... \n";
  mqtt_publisher.connect( "127.0.0.1", 1883, 60 );

  cout << "Starting ... \n";
  for ( int j = 0; j < 1000; j++) {

    cout << "j = " << j << '\n';

    // trigger mosquitto callbacks
    mqtt_publisher.loop(1, 1);

    // Sending
    AutomationLevel al;
    al.Automation_Level = j;
    mqtt_publisher.publish( al );
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
  cout << "> Clean exit\n";
  return 0;
}
