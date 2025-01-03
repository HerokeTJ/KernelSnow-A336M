cmd_drivers/net/phy/smsc.mod := { echo  drivers/net/phy/smsc.o; llvm-nm drivers/net/phy/smsc.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/net/phy/smsc.mod
