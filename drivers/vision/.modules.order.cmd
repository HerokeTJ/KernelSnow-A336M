cmd_drivers/vision/modules.order := {   echo drivers/vision/npu.ko; :; } | awk '!x[$$0]++' - > drivers/vision/modules.order
