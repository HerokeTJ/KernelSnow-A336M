cmd_drivers/hid/hid-tivo.mod := { echo  drivers/hid/hid-tivo.o; llvm-nm drivers/hid/hid-tivo.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/hid/hid-tivo.mod
