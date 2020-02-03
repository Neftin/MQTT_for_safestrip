## loggers usage ##

* `Local_MQTT_sub_logger.py` -> log on localhost
* `Local_MQTT_sub_logger.py <ip>` -> log on desired ip
* `MQTT_sub_logger.py` log on the Swarco server

## change logger file ##

* Write on the topic: **SafeStrip/set_ID_log** an identificative string of the log file
* The new name will be `<today date>_log_ID_<ID>`
* A confirmation will appear on the terminal the log is running
* Usage of mosquitto standard client for set_ID_log is strongly recommened