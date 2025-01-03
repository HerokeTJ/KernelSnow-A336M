cmd_drivers/misc/drb/modules.order := {   echo drivers/misc/drb/dev_ril_bridge.ko; :; } | awk '!x[$$0]++' - > drivers/misc/drb/modules.order
