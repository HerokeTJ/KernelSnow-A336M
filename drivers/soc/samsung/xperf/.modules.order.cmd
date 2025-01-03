cmd_drivers/soc/samsung/xperf/modules.order := {   echo drivers/soc/samsung/xperf/xperf.ko; :; } | awk '!x[$$0]++' - > drivers/soc/samsung/xperf/modules.order
