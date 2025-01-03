cmd_arch/arm64/crypto/modules.order := {  :; } | awk '!x[$$0]++' - > arch/arm64/crypto/modules.order
