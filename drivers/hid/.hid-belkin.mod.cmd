cmd_drivers/hid/hid-belkin.mod := { echo  drivers/hid/hid-belkin.o; llvm-nm drivers/hid/hid-belkin.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-belkin.mod
