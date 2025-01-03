cmd_drivers/bus/modules.order := {   cat drivers/bus/mhi/modules.order; :; } | awk '!x[$$0]++' - > drivers/bus/modules.order
