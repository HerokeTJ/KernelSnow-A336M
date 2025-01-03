cmd_drivers/rtc/modules.order := {   echo drivers/rtc/rtc-s2mpu13.ko; :; } | awk '!x[$$0]++' - > drivers/rtc/modules.order
