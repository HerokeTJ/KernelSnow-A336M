cmd_drivers/hid/hid-primax.mod := { echo  drivers/hid/hid-primax.o; llvm-nm drivers/hid/hid-primax.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-primax.mod
