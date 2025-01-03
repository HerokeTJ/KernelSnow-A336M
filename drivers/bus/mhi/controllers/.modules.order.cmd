cmd_drivers/bus/mhi/controllers/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/bus/mhi/controllers/modules.order
