cmd_drivers/char/modules.order := {   cat drivers/char/hw_random/modules.order;   cat drivers/char/agp/modules.order; :; } | awk '!x[$$0]++' - > drivers/char/modules.order
