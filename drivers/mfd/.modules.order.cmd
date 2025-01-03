cmd_drivers/mfd/modules.order := {   echo drivers/mfd/s2mpu13_mfd.ko;   echo drivers/mfd/s2mpu14_mfd.ko; :; } | awk '!x[$$0]++' - > drivers/mfd/modules.order
