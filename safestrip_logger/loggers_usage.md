## loggers usage ##

* `local_MQTT_sub_logger.py` -> log on localhost
* `local_MQTT_sub_logger.py <ip>` -> log on desired ip
* `remote_MQTT_sub_logger.py` log on the Swarco server

## change logger file ##

* Write on the topic: **SafeStrip/set_ID_log** an identificative string of the log file
* The new name will be `<today date>_log_ID_<ID>`
* A confirmation will appear on the terminal the log is running
* the file **change_file_esperiment.py** can be instead used for Swarco server experiment ID change