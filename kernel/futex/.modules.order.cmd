cmd_kernel/futex/modules.order := {  :; } | awk '!x[$$0]++' - > kernel/futex/modules.order
