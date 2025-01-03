cmd_drivers/net/pcs/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/net/pcs/modules.order
