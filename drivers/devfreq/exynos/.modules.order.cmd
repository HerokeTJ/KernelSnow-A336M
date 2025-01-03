cmd_drivers/devfreq/exynos/modules.order := {   echo drivers/devfreq/exynos/exynos_devfreq.ko; :; } | awk '!x[$$0]++' - > drivers/devfreq/exynos/modules.order
