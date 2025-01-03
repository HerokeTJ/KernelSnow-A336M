cmd_drivers/soc/samsung/exynos-pm/modules.order := {   echo drivers/soc/samsung/exynos-pm/exynos-pm.ko; :; } | awk '!x[$$0]++' - > drivers/soc/samsung/exynos-pm/modules.order
