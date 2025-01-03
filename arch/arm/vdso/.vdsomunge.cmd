cmd_arch/arm64/kernel/vdso32/../../../arm/vdso/vdsomunge := clang -Wp,-MMD,arch/arm64/kernel/vdso32/../../../arm/vdso/.vdsomunge.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o arch/arm64/kernel/vdso32/../../../arm/vdso/vdsomunge arch/arm64/kernel/vdso32/../../../arm/vdso/vdsomunge.c   

source_arch/arm64/kernel/vdso32/../../../arm/vdso/vdsomunge := arch/arm64/kernel/vdso32/../../../arm/vdso/vdsomunge.c

deps_arch/arm64/kernel/vdso32/../../../arm/vdso/vdsomunge := \

arch/arm64/kernel/vdso32/../../../arm/vdso/vdsomunge: $(deps_arch/arm64/kernel/vdso32/../../../arm/vdso/vdsomunge)

$(deps_arch/arm64/kernel/vdso32/../../../arm/vdso/vdsomunge):
