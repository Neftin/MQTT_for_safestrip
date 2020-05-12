# MQTT for safestrip #
## Introduction ##

This library Allows to send/receive trough MQTT C-structures contained in generated folder.
The structures are generated from the excel file signalMap (see folder)

## FOLDERS ##

This repository contains the library for the MQTT communication of the project SAFESTRIP

* **Signal_map** contains the excel file with all the signals of the MQTT communication
* **generated** contains the library (source code), with header and body files. This is the folder to be used for MQTT communication
* **publish_subscribe_examples** contains some example of publish/subscribe script in c++
* **Rimbalzors:** contains script to replicate all the message from local to remote broker and viceversa: useful is mosquitto doesn't qork wioth SSL and you want to use paho (used from the rimbalzros)
* **Safestrip_logger:** contains the logger in python
* **Matlab**: It contains **elaborate_direct_iterative.m** see the instruction below
* **Test_code**: it contains useful python script to publish and subscribe in MQTT

## NOTES ##

* Use always the last version of the library
* It is retrocompatible with code developed with older versions, unless there are some signal changed/deleted you are using
* **elaborate_direct_iterative.m**:
  * It Serves to convert **yaml log** files in **mat files** (for now **it does not** support MAPEM, virtual toll and parking messages)
  * It needs the folder `lib` in the same folder
  * It needs the log data in a folder `../data`
  * Once is launched the conversion results are place in `../data_mat`
  * If there are files that are already converted, they will be ignored
