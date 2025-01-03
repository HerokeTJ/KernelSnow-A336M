cmd_crypto/modules.order := {   cat crypto/asymmetric_keys/modules.order;   echo crypto/lzo.ko;   echo crypto/lzo-rle.ko; :; } | awk '!x[$$0]++' - > crypto/modules.order
