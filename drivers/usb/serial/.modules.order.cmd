cmd_drivers/usb/serial/modules.order := {   echo drivers/usb/serial/usbserial.ko; :; } | awk '!x[$$0]++' - > drivers/usb/serial/modules.order
