cmd_io_uring/modules.order := {  :; } | awk '!x[$$0]++' - > io_uring/modules.order
