cmd_drivers/battery/core/modules.order := {   echo drivers/battery/core/sb-core.ko; :; } | awk '!x[$$0]++' - > drivers/battery/core/modules.order
