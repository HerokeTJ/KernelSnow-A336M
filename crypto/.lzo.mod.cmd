cmd_crypto/lzo.mod := { echo  crypto/lzo.o; llvm-nm crypto/lzo.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > crypto/lzo.mod
