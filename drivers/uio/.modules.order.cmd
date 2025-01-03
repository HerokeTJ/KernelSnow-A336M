cmd_drivers/uio/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/uio/modules.order
