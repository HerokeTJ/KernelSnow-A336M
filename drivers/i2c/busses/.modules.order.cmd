cmd_drivers/i2c/busses/modules.order := {   echo drivers/i2c/busses/i2c-exynos5.ko;   echo drivers/i2c/busses/acpm-mfd-bus.ko; :; } | awk '!x[$$0]++' - > drivers/i2c/busses/modules.order
