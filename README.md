# MQTT for safestrip #
This repository contains the library for the MQTT communication of the project SAFESTRIP

* **Signal_map** contains the excel file with all the signals of the MQTT communication
* **generated** contains the library (source code), with header and body files. This is the folder to be used for MQTT communication
* **publish_subscribe_examples** contains some example of publish/subscribe script in c++
* **Rimbalzors:** contains script to replicate all the message from local to remote broker and viceversa: useful is mosquitto doesn't qork wioth SSL and you want to use paho (used from the rimbalzros)
* **Safestrip_logger:** contains the logger in python

## NOTES ##

* Use always the last version of the library
* It is retrocompatible with code developed with older versions, unless there are some signal changed/deleted you are using

