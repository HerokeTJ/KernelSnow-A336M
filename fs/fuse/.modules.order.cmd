cmd_fs/fuse/modules.order := {  :; } | awk '!x[$$0]++' - > fs/fuse/modules.order
