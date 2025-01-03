cmd_drivers/pinctrl/samsung/modules.order := {   echo drivers/pinctrl/samsung/pinctrl-samsung-core.ko; :; } | awk '!x[$$0]++' - > drivers/pinctrl/samsung/modules.order
