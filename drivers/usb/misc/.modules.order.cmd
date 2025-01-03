cmd_drivers/usb/misc/modules.order := {   echo drivers/usb/misc/ehset.ko;   echo drivers/usb/misc/lvstest.ko; :; } | awk '!x[$$0]++' - > drivers/usb/misc/modules.order
