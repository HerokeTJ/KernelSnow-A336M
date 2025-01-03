cmd_drivers/hid/hid-pl.mod := { echo  drivers/hid/hid-pl.o; llvm-nm drivers/hid/hid-pl.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-pl.mod
