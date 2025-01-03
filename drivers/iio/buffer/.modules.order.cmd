cmd_drivers/iio/buffer/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/iio/buffer/modules.order
