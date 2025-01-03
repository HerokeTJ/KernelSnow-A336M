cmd_drivers/reset/modules.order := {   cat drivers/reset/hisilicon/modules.order; :; } | awk '!x[$$0]++' - > drivers/reset/modules.order
