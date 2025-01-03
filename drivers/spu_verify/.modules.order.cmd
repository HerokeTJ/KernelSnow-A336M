cmd_drivers/spu_verify/modules.order := {   echo drivers/spu_verify/spu_verify.ko; :; } | awk '!x[$$0]++' - > drivers/spu_verify/modules.order
