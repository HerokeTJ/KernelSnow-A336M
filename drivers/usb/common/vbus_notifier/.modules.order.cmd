cmd_drivers/usb/common/vbus_notifier/modules.order := {   echo drivers/usb/common/vbus_notifier/vbus_notifier.ko; :; } | awk '!x[$$0]++' - > drivers/usb/common/vbus_notifier/modules.order
