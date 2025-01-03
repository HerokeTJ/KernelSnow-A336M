cmd_drivers/platform/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/platform/modules.order
