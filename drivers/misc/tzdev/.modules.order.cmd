cmd_drivers/misc/tzdev/modules.order := {   echo drivers/misc/tzdev/tzdev.ko; :; } | awk '!x[$$0]++' - > drivers/misc/tzdev/modules.order
