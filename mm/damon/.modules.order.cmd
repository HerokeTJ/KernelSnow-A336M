cmd_mm/damon/modules.order := {  :; } | awk '!x[$$0]++' - > mm/damon/modules.order
