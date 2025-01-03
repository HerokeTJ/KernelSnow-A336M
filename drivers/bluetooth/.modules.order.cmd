cmd_drivers/bluetooth/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/bluetooth/modules.order
