cmd_drivers/hid/hid-saitek.mod := { echo  drivers/hid/hid-saitek.o; llvm-nm drivers/hid/hid-saitek.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-saitek.mod
