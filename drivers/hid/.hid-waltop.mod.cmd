cmd_drivers/hid/hid-waltop.mod := { echo  drivers/hid/hid-waltop.o; llvm-nm drivers/hid/hid-waltop.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-waltop.mod
