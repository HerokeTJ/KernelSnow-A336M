cmd_drivers/dma/pl330.mod := { echo  drivers/dma/pl330.o; llvm-nm drivers/dma/pl330.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > drivers/dma/pl330.mod
