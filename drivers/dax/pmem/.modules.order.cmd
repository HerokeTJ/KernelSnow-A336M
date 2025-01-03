cmd_drivers/dax/pmem/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/dax/pmem/modules.order
