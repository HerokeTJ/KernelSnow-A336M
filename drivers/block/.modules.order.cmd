cmd_drivers/block/modules.order := {   cat drivers/block/zram/modules.order; :; } | awk '!x[$$0]++' - > drivers/block/modules.order
