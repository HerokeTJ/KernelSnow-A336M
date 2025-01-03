cmd_drivers/hid/hid-cherry.mod := { echo  drivers/hid/hid-cherry.o; llvm-nm drivers/hid/hid-cherry.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-cherry.mod
