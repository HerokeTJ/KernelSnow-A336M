cmd_drivers/hid/hid-tmff.mod := { echo  drivers/hid/hid-tmff.o; llvm-nm drivers/hid/hid-tmff.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-tmff.mod
