cmd_drivers/media/platform/exynos/scaler/modules.order := {   echo drivers/media/platform/exynos/scaler/scaler.ko; :; } | awk '!x[$$0]++' - > drivers/media/platform/exynos/scaler/modules.order
