cmd_security/samsung/defex_lsm/pack_rules := clang -Wp,-MMD,security/samsung/defex_lsm/.pack_rules.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89     -DDEFEX_PERMISSIVE_IM -DDEFEX_PERMISSIVE_INT -DDEFEX_PED_ENABLE -DDEFEX_SAFEPLACE_ENABLE -DDEFEX_INTEGRITY_ENABLE -DDEFEX_IMMUTABLE_ENABLE -DDEFEX_LP_ENABLE -DDEFEX_UMH_RESTRICTION_ENABLE -DDEFEX_CACHES_ENABLE -DDEFEX_DEPENDING_ON_OEMUNLOCK -DDEFEX_RAMDISK_ENABLE -DDEFEX_SIGN_ENABLE -DDEFEX_PERMISSIVE_INT -DDEFEX_PERMISSIVE_SP -DDEFEX_PERMISSIVE_TM -DDEFEX_PERMISSIVE_IM -DDEFEX_PERMISSIVE_LP -DDEFEX_DEBUG_ENABLE -D__visible_for_testing=static    -o security/samsung/defex_lsm/pack_rules security/samsung/defex_lsm/pack_rules.c   

source_security/samsung/defex_lsm/pack_rules := security/samsung/defex_lsm/pack_rules.c

deps_security/samsung/defex_lsm/pack_rules := \
  security/samsung/defex_lsm/include/defex_rules.h \

security/samsung/defex_lsm/pack_rules: $(deps_security/samsung/defex_lsm/pack_rules)

$(deps_security/samsung/defex_lsm/pack_rules):
