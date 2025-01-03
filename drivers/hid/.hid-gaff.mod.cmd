cmd_drivers/hid/hid-gaff.mod := { echo  drivers/hid/hid-gaff.o; llvm-nm drivers/hid/hid-gaff.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-gaff.mod
