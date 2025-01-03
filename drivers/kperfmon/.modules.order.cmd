cmd_drivers/kperfmon/modules.order := {   echo drivers/kperfmon/kperfmon.ko; :; } | awk '!x[$$0]++' - > drivers/kperfmon/modules.order
