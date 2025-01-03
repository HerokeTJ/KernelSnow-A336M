cmd_net/netfilter/modules.order := {  :; } | awk '!x[$$0]++' - > net/netfilter/modules.order
