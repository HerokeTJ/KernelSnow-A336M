cmd_drivers/media/platform/exynos/mcfrc/modules.order := {   echo drivers/media/platform/exynos/mcfrc/mcfrc.ko; :; } | awk '!x[$$0]++' - > drivers/media/platform/exynos/mcfrc/modules.order
