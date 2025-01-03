cmd_drivers/net/slip/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/net/slip/modules.order
