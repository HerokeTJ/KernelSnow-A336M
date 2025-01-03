cmd_fs/overlayfs/modules.order := {  :; } | awk '!x[$$0]++' - > fs/overlayfs/modules.order
