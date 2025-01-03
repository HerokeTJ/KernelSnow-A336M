cmd_drivers/i3c/modules.order := {   cat drivers/i3c/master/modules.order; :; } | awk '!x[$$0]++' - > drivers/i3c/modules.order
