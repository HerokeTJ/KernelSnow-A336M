cmd_drivers/hid/hid-axff.mod := { echo  drivers/hid/hid-axff.o; llvm-nm drivers/hid/hid-axff.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-axff.mod
