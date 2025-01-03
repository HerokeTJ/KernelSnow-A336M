cmd_drivers/usb/typec/tcpm/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/usb/typec/tcpm/modules.order
