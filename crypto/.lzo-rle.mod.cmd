cmd_crypto/lzo-rle.mod := { echo  crypto/lzo-rle.o; llvm-nm crypto/lzo-rle.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > crypto/lzo-rle.mod
