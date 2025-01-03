cmd_drivers/media/mc/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/media/mc/modules.order
