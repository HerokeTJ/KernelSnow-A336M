cmd_fs/verity/modules.order := {  :; } | awk '!x[$$0]++' - > fs/verity/modules.order
