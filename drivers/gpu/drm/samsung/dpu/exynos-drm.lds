SECTIONS {
	__patchable_function_entries : { *(__patchable_function_entries) }
	.text : {
		__set_recovery_mode$3435f46b26c05060f9e72a45c090fb5b.cfi_jt = . + 0x55b68;
		__set_recovery_state$3435f46b26c05060f9e72a45c090fb5b.cfi_jt = . + 0x55b78;
		__get_recovery_state$3435f46b26c05060f9e72a45c090fb5b.cfi_jt = . + 0x55bb0;
		__exynos_hdr_update$a8088351f22ad3b9006b532916af48ba.cfi_jt = . + 0x55bb8;
		__exynos_dqe_prepare$5f1a96dadbcce5447e3779ff7aedac2e.cfi_jt = . + 0x55bc0;
		__exynos_dqe_state$5f1a96dadbcce5447e3779ff7aedac2e.cfi_jt = . + 0x55cc8;
		__exynos_hdr_disable$a8088351f22ad3b9006b532916af48ba.cfi_jt = . + 0x55d10;
		__drm_atomic_state_free.cfi_jt = . + 0x55d50;
		__exynos_hdr_prepare$a8088351f22ad3b9006b532916af48ba.cfi_jt = . + 0x55da8;
		__exynos_dqe_resume$5f1a96dadbcce5447e3779ff7aedac2e.cfi_jt = . + 0x561a0;
	}
}
