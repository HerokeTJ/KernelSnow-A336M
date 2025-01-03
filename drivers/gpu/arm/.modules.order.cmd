cmd_drivers/gpu/arm/modules.order := {   cat drivers/gpu/arm/bv_r32p1/modules.order; :; } | awk '!x[$$0]++' - > drivers/gpu/arm/modules.order
