cmd_drivers/misc/samsung/scsc_bt/modules.order := {   echo drivers/misc/samsung/scsc_bt/scsc_bt.ko; :; } | awk '!x[$$0]++' - > drivers/misc/samsung/scsc_bt/modules.order
