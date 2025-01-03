cmd_drivers/devfreq/modules.order := {   cat drivers/devfreq/event/modules.order;   cat drivers/devfreq/exynos/modules.order; :; } | awk '!x[$$0]++' - > drivers/devfreq/modules.order
