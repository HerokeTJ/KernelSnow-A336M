cmd_arch/arm64/lib/modules.order := {  :; } | awk '!x[$$0]++' - > arch/arm64/lib/modules.order
