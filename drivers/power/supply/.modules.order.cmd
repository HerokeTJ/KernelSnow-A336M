cmd_drivers/power/supply/modules.order := {   echo drivers/power/supply/ifpmic_class.ko; :; } | awk '!x[$$0]++' - > drivers/power/supply/modules.order
