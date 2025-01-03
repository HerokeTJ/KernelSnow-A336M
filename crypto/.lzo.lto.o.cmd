cmd_crypto/lzo.lto.o := ld.lld -EL  -maarch64elf -z norelro --thinlto-cache-dir=.thinlto-cache -mllvm -import-instr-limit=5 -z noexecstack   -r -o crypto/lzo.lto.o  --whole-archive crypto/lzo.o
