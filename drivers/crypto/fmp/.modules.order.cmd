cmd_drivers/crypto/fmp/modules.order := {   echo drivers/crypto/fmp/fmp-core.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/fmp/modules.order
