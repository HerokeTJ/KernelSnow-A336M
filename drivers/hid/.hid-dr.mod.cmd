cmd_drivers/hid/hid-dr.mod := { echo  drivers/hid/hid-dr.o; llvm-nm drivers/hid/hid-dr.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-dr.mod
