cmd_drivers/sensors_lego/modules.order := {   echo drivers/sensors_lego/isg5320a.ko; :; } | awk '!x[$$0]++' - > drivers/sensors_lego/modules.order
