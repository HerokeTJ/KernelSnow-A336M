cmd_drivers/usb/class/modules.order := {   echo drivers/usb/class/usblp.ko;   echo drivers/usb/class/cdc-wdm.ko; :; } | awk '!x[$$0]++' - > drivers/usb/class/modules.order
