cmd_drivers/vibrator/common/modules.order := {   echo drivers/vibrator/common/sec_vibrator.ko; :; } | awk '!x[$$0]++' - > drivers/vibrator/common/modules.order
