cmd_drivers/clocksource/modules.order := {   echo drivers/clocksource/exynos_mct.ko; :; } | awk '!x[$$0]++' - > drivers/clocksource/modules.order
