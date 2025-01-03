cmd_drivers/staging/media/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/staging/media/modules.order
