cmd_drivers/hid/hid-ntrig.mod := { echo  drivers/hid/hid-ntrig.o; llvm-nm drivers/hid/hid-ntrig.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-ntrig.mod
