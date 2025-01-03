cmd_drivers/leds/modules.order := {   cat drivers/leds/trigger/modules.order;   echo drivers/leds/leds-s2mu106.ko; :; } | awk '!x[$$0]++' - > drivers/leds/modules.order
