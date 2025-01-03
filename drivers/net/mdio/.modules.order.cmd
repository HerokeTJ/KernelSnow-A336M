cmd_drivers/net/mdio/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/net/mdio/modules.order
