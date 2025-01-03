cmd_drivers/media/platform/exynos/smfc/modules.order := {   echo drivers/media/platform/exynos/smfc/smfc.ko; :; } | awk '!x[$$0]++' - > drivers/media/platform/exynos/smfc/modules.order
