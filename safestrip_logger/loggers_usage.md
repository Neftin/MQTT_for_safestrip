## loggers usage: launch with python ##

* `local_MQTT_sub_logger_triggered.py`  log on localhost 127.0.0.1
* `local_MQTT_sub_logger_triggered <ip>`  log on desired ip
* `remote_MQTT_sub_logger_triggered.py` log on the Swarco server

## Notes ##

* The loggers works only if triggered by the application writing on the topic SafeStrip/LOG, make sure that is the case
* They will create a folder `log_yaml `or a folder `log_local_yaml` and a folder with the day. for example for 2020/7/20:
  * ``log_local_yaml/2020-07-20``
* The files are dated and timestamped
* First time of use is recommended to check the payload dimensions, on UNIX and MACOSX the logger is tested.

> make sure the file ca.crt is in the same folder if you use `remote_MQTT_sub_logger_triggered.py`

