cmd_drivers/usb/host/modules.order := {   echo drivers/usb/host/xhci-exynos.ko; :; } | awk '!x[$$0]++' - > drivers/usb/host/modules.order
