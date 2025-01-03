cmd_net/xdp/modules.order := {  :; } | awk '!x[$$0]++' - > net/xdp/modules.order
