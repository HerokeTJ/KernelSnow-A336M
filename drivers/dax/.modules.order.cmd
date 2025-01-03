cmd_drivers/dax/modules.order := {   cat drivers/dax/pmem/modules.order;   cat drivers/dax/hmem/modules.order; :; } | awk '!x[$$0]++' - > drivers/dax/modules.order
