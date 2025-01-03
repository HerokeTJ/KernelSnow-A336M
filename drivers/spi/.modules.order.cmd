cmd_drivers/spi/modules.order := {   echo drivers/spi/spidev.ko;   echo drivers/spi/spi-s3c64xx.ko; :; } | awk '!x[$$0]++' - > drivers/spi/modules.order
