cmd_drivers/iio/light/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/iio/light/modules.order
