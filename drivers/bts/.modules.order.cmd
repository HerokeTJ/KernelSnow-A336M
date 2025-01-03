cmd_drivers/bts/modules.order := {   echo drivers/bts/exynos-bts.ko;   echo drivers/bts/exynos-btsops8825.ko; :; } | awk '!x[$$0]++' - > drivers/bts/modules.order
