cmd_fs/exfat/modules.order := {  :; } | awk '!x[$$0]++' - > fs/exfat/modules.order
