cmd_drivers/bus/mhi/devices/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/bus/mhi/devices/modules.order
