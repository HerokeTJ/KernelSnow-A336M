cmd_drivers/char/hw_random/modules.order := {   echo drivers/char/hw_random/exyswd-rng.ko; :; } | awk '!x[$$0]++' - > drivers/char/hw_random/modules.order
