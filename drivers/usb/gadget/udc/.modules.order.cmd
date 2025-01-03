cmd_drivers/usb/gadget/udc/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/usb/gadget/udc/modules.order
