cmd_drivers/soc/samsung/pm_qos/modules.order := {   echo drivers/soc/samsung/pm_qos/exynos_pm_qos.ko; :; } | awk '!x[$$0]++' - > drivers/soc/samsung/pm_qos/modules.order
