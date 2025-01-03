cmd_drivers/soc/samsung/exynos-hdcp/modules.order := {   echo drivers/soc/samsung/exynos-hdcp/hdcp2.ko; :; } | awk '!x[$$0]++' - > drivers/soc/samsung/exynos-hdcp/modules.order
