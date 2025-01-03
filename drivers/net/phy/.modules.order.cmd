cmd_drivers/net/phy/modules.order := {   echo drivers/net/phy/smsc.ko; :; } | awk '!x[$$0]++' - > drivers/net/phy/modules.order
