cmd_drivers/spi/spidev.mod := { echo  drivers/spi/spidev.o; llvm-nm drivers/spi/spidev.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/spi/spidev.mod
