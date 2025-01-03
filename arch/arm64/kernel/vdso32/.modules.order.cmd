cmd_arch/arm64/kernel/vdso32/modules.order := {  :; } | awk '!x[$$0]++' - > arch/arm64/kernel/vdso32/modules.order
