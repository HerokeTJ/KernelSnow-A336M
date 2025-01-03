cmd_drivers/net/wireguard/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/net/wireguard/modules.order
