cmd_drivers/gnss/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/gnss/modules.order
