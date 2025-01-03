cmd_drivers/crypto/allwinner/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/crypto/allwinner/modules.order
