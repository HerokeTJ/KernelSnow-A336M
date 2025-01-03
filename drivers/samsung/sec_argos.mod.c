#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7c24b32d, "module_layout" },
	{ 0xdcb764ad, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x574add77, "__mutex_init" },
	{ 0x5cf87584, "of_device_is_available" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x5a921311, "strncmp" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x28498a88, "freq_qos_add_request" },
	{ 0xefeb0f57, "cpufreq_cpu_get" },
	{ 0x2eec24ef, "freq_qos_update_request" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x78c7940d, "mutex_trylock" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6331d19e, "misc_register" },
	{ 0x894967be, "freq_qos_remove_request" },
	{ 0x8fe79d0e, "exynos_pm_qos_remove_request" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0x1413a585, "exynos_pm_qos_request_active" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x2a7b4b03, "irq_set_affinity_hint" },
	{ 0x42f1936, "set_cpus_allowed_ptr" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "exynos_pm_qos");

