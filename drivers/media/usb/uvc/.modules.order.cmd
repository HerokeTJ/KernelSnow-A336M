cmd_drivers/media/usb/uvc/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/media/usb/uvc/modules.order
