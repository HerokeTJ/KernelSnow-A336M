cmd_drivers/usb/typec/slsi/s2mu106/modules.order := {   echo drivers/usb/typec/slsi/s2mu106/s2mu106-usbpd.ko; :; } | awk '!x[$$0]++' - > drivers/usb/typec/slsi/s2mu106/modules.order
