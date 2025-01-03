cmd_drivers/hid/hid-sjoy.mod := { echo  drivers/hid/hid-sjoy.o; llvm-nm drivers/hid/hid-sjoy.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-sjoy.mod
