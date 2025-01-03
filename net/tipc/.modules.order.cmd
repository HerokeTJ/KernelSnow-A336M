cmd_net/tipc/modules.order := {  :; } | awk '!x[$$0]++' - > net/tipc/modules.order
