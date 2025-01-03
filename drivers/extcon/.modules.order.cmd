cmd_drivers/extcon/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/extcon/modules.order
