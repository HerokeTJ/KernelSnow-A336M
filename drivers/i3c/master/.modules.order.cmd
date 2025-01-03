cmd_drivers/i3c/master/modules.order := {   echo drivers/i3c/master/i3c-hci-exynos.ko; :; } | awk '!x[$$0]++' - > drivers/i3c/master/modules.order
