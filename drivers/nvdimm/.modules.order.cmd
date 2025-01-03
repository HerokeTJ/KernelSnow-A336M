cmd_drivers/nvdimm/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/nvdimm/modules.order
