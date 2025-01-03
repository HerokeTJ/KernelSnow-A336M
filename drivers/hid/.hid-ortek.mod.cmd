cmd_drivers/hid/hid-ortek.mod := { echo  drivers/hid/hid-ortek.o; llvm-nm drivers/hid/hid-ortek.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-ortek.mod
