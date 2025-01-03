cmd_fs/crypto/modules.order := {  :; } | awk '!x[$$0]++' - > fs/crypto/modules.order
