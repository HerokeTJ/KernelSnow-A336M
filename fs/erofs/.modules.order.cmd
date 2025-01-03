cmd_fs/erofs/modules.order := {  :; } | awk '!x[$$0]++' - > fs/erofs/modules.order
