cmd_fs/ntfs/modules.order := {  :; } | awk '!x[$$0]++' - > fs/ntfs/modules.order
