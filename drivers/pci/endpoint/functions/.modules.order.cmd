cmd_drivers/pci/endpoint/functions/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/pci/endpoint/functions/modules.order
