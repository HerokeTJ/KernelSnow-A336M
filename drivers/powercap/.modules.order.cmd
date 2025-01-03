cmd_drivers/powercap/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/powercap/modules.order
