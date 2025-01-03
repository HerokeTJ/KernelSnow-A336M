cmd_drivers/uh/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/uh/modules.order
