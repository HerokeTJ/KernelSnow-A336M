cmd_kernel/sched/ems/modules.order := {   echo kernel/sched/ems/ems.ko; :; } | awk '!x[$$0]++' - > kernel/sched/ems/modules.order
