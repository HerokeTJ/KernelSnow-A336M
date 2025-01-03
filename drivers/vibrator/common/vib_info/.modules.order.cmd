cmd_drivers/vibrator/common/vib_info/modules.order := {   echo drivers/vibrator/common/vib_info/vibrator_vib_info.ko; :; } | awk '!x[$$0]++' - > drivers/vibrator/common/vib_info/modules.order
