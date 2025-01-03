cmd_drivers/input/sec_input/stm/modules.order := {   echo drivers/input/sec_input/stm/stm_ts.ko; :; } | awk '!x[$$0]++' - > drivers/input/sec_input/stm/modules.order
