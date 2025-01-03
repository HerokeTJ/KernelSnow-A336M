cmd_drivers/mstdrv/mstdrv.mod := { echo  drivers/mstdrv/mstdrv_main.o; llvm-nm drivers/mstdrv/mstdrv.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/mstdrv/mstdrv.mod
