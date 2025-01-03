cmd_net/vmw_vsock/modules.order := {  :; } | awk '!x[$$0]++' - > net/vmw_vsock/modules.order
