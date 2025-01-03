cmd_net/nfc/modules.order := {  :; } | awk '!x[$$0]++' - > net/nfc/modules.order
