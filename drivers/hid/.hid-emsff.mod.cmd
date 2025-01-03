cmd_drivers/hid/hid-emsff.mod := { echo  drivers/hid/hid-emsff.o; llvm-nm drivers/hid/hid-emsff.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-emsff.mod
