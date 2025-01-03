cmd_drivers/input/input_boost/modules.order := {   echo drivers/input/input_boost/input_booster_lkm.ko; :; } | awk '!x[$$0]++' - > drivers/input/input_boost/modules.order
