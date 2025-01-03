cmd_drivers/gpio/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/gpio/modules.order
