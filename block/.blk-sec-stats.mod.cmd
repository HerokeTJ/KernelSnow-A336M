cmd_block/blk-sec-stats.mod := { echo  block/blk-sec-stats.o; llvm-nm block/blk-sec-stats.o | awk '$$1 == "U" { printf("%s%s", x++ ? " " : "", $$2) }'; echo; } > block/blk-sec-stats.mod
