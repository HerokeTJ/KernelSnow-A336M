cmd_drivers/phy/allwinner/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/phy/allwinner/modules.order
