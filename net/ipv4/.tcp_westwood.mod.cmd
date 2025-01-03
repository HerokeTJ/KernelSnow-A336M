cmd_net/ipv4/tcp_westwood.mod := { echo  net/ipv4/tcp_westwood.o; llvm-nm net/ipv4/tcp_westwood.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > net/ipv4/tcp_westwood.mod
