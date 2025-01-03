cmd_drivers/soc/samsung/cpif/dit/modules.order := {   echo drivers/soc/samsung/cpif/dit/exynos_dit.ko; :; } | awk '!x[$$0]++' - > drivers/soc/samsung/cpif/dit/modules.order
