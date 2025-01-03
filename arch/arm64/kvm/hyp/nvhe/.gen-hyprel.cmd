cmd_arch/arm64/kvm/hyp/nvhe/gen-hyprel := clang -Wp,-MMD,arch/arm64/kvm/hyp/nvhe/.gen-hyprel.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89     -I./include    -o arch/arm64/kvm/hyp/nvhe/gen-hyprel arch/arm64/kvm/hyp/nvhe/gen-hyprel.c   

source_arch/arm64/kvm/hyp/nvhe/gen-hyprel := arch/arm64/kvm/hyp/nvhe/gen-hyprel.c

deps_arch/arm64/kvm/hyp/nvhe/gen-hyprel := \
    $(wildcard include/config/relocatable.h) \
    $(wildcard include/config/cpu/little/endian.h) \
    $(wildcard include/config/cpu/big/endian.h) \

arch/arm64/kvm/hyp/nvhe/gen-hyprel: $(deps_arch/arm64/kvm/hyp/nvhe/gen-hyprel)

$(deps_arch/arm64/kvm/hyp/nvhe/gen-hyprel):
