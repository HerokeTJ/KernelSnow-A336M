cmd_mm/kasan/modules.order := {  :; } | awk '!x[$$0]++' - > mm/kasan/modules.order
