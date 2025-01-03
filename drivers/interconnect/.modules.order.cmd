cmd_drivers/interconnect/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/interconnect/modules.order
