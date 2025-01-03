cmd_drivers/iio/pressure/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/iio/pressure/modules.order
