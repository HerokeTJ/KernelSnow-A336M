cmd_drivers/hid/hid-ezkey.mod := { echo  drivers/hid/hid-ezkey.o; llvm-nm drivers/hid/hid-ezkey.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-ezkey.mod
