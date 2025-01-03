cmd_drivers/i2c/i2c-dev.mod := { echo  drivers/i2c/i2c-dev.o; llvm-nm drivers/i2c/i2c-dev.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/i2c/i2c-dev.mod
