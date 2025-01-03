cmd_drivers/net/can/dev/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/net/can/dev/modules.order
