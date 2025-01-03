cmd_drivers/mstdrv/modules.order := {   echo drivers/mstdrv/mstdrv.ko; :; } | awk '!x[$$0]++' - > drivers/mstdrv/modules.order
