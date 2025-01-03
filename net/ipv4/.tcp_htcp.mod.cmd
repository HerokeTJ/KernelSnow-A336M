cmd_net/ipv4/tcp_htcp.mod := { echo  net/ipv4/tcp_htcp.o; llvm-nm net/ipv4/tcp_htcp.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > net/ipv4/tcp_htcp.mod
