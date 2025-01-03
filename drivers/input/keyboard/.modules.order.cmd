cmd_drivers/input/keyboard/modules.order := {   echo drivers/input/keyboard/s2mpu13-key.ko; :; } | awk '!x[$$0]++' - > drivers/input/keyboard/modules.order
