cmd_mm/kfence/modules.order := {  :; } | awk '!x[$$0]++' - > mm/kfence/modules.order
