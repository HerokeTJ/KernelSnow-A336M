cmd_fs/cramfs/modules.order := {  :; } | awk '!x[$$0]++' - > fs/cramfs/modules.order
