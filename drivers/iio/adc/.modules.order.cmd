cmd_drivers/iio/adc/modules.order := {   echo drivers/iio/adc/s2mpu13_adc.ko; :; } | awk '!x[$$0]++' - > drivers/iio/adc/modules.order
