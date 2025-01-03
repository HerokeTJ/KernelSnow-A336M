cmd_drivers/power/reset/modules.order := {   echo drivers/power/reset/exynos-reboot.ko; :; } | awk '!x[$$0]++' - > drivers/power/reset/modules.order
