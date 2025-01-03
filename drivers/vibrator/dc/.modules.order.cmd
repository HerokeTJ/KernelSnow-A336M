cmd_drivers/vibrator/dc/modules.order := {   echo drivers/vibrator/dc/dc_vibrator.ko; :; } | awk '!x[$$0]++' - > drivers/vibrator/dc/modules.order
