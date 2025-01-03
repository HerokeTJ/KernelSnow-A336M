cmd_drivers/phy/renesas/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/phy/renesas/modules.order
