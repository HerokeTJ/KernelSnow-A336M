cmd_net/bridge/modules.order := {   cat net/bridge/netfilter/modules.order; :; } | awk '!x[$$0]++' - > net/bridge/modules.order
