cmd_drivers/block/zram/modules.order := {   echo drivers/block/zram/zram.ko; :; } | awk '!x[$$0]++' - > drivers/block/zram/modules.order
