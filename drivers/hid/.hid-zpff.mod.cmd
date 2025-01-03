cmd_drivers/hid/hid-zpff.mod := { echo  drivers/hid/hid-zpff.o; llvm-nm drivers/hid/hid-zpff.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-zpff.mod
