cmd_drivers/sensorhub/modules.order := {   echo drivers/sensorhub/shub.ko;   echo drivers/sensorhub/utility/sensor_core.ko; :; } | awk '!x[$$0]++' - > drivers/sensorhub/modules.order
