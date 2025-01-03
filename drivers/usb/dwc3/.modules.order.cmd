cmd_drivers/usb/dwc3/modules.order := {   echo drivers/usb/dwc3/dwc3-exynos-usb.ko; :; } | awk '!x[$$0]++' - > drivers/usb/dwc3/modules.order
