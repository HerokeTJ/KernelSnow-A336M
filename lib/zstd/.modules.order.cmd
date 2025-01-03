cmd_lib/zstd/modules.order := {  :; } | awk '!x[$$0]++' - > lib/zstd/modules.order
