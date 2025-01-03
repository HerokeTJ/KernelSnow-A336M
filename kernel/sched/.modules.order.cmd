cmd_kernel/sched/modules.order := {   cat kernel/sched/ems/modules.order; :; } | awk '!x[$$0]++' - > kernel/sched/modules.order
