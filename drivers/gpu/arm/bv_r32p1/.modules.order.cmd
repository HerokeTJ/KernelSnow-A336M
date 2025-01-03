cmd_drivers/gpu/arm/bv_r32p1/modules.order := {   echo drivers/gpu/arm/bv_r32p1/mali_kbase.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/arm/bv_r32p1/modules.order
