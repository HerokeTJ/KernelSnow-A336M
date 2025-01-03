cmd_drivers/media/platform/exynos/mfc/modules.order := {   echo drivers/media/platform/exynos/mfc/exynos_mfc.ko; :; } | awk '!x[$$0]++' - > drivers/media/platform/exynos/mfc/modules.order
