cmd_drivers/gpu/trace/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/gpu/trace/modules.order
