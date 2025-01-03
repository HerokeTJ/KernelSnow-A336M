cmd_drivers/nfc/modules.order := {   echo drivers/nfc/nfc_sec.ko; :; } | awk '!x[$$0]++' - > drivers/nfc/modules.order
