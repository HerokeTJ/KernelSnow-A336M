cmd_drivers/usb/notify/modules.order := {   echo drivers/usb/notify/usb_notify_layer.ko;   echo drivers/usb/notify/usb_notifier.ko; :; } | awk '!x[$$0]++' - > drivers/usb/notify/modules.order
