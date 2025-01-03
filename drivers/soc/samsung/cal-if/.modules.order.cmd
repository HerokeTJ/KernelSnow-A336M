cmd_drivers/soc/samsung/cal-if/modules.order := {   echo drivers/soc/samsung/cal-if/cmupmucal.ko; :; } | awk '!x[$$0]++' - > drivers/soc/samsung/cal-if/modules.order
