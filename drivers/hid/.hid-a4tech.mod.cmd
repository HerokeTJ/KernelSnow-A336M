cmd_drivers/hid/hid-a4tech.mod := { echo  drivers/hid/hid-a4tech.o; llvm-nm drivers/hid/hid-a4tech.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-a4tech.mod
