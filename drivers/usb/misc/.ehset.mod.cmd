cmd_drivers/usb/misc/ehset.mod := { echo  drivers/usb/misc/ehset.o; llvm-nm drivers/usb/misc/ehset.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/usb/misc/ehset.mod
