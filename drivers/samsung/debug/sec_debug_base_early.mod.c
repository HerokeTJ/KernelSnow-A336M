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
	{ 0xb1307de2, "init_task" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xa4eeb768, "dss_get_last_paddr_acpm_log" },
	{ 0x21fd68f, "dss_get_sizeof_acpm_log" },
	{ 0x5296a765, "dss_get_len_acpm_log" },
	{ 0x4056d8a0, "dss_get_vaddr_acpm_log" },
	{ 0x985fdd47, "dss_get_last_paddr_thermal_log" },
	{ 0x82ae83a8, "dss_get_sizeof_thermal_log" },
	{ 0x849ba5bd, "dss_get_len_thermal_log" },
	{ 0x203c568d, "dss_get_vaddr_thermal_log" },
	{ 0x28b3c2dd, "dss_get_last_paddr_cpuidle_log" },
	{ 0x308af1c, "dss_get_sizeof_cpuidle_log" },
	{ 0x11c963a6, "dss_get_len_cpuidle_log_by_cpu" },
	{ 0x14ea9a86, "dss_get_vaddr_cpuidle_log_by_cpu" },
	{ 0xd1781aec, "dss_get_last_paddr_freq_log" },
	{ 0xbea62a1c, "dss_get_len_freq_log" },
	{ 0xee2f5bf6, "dss_get_sizeof_freq_log" },
	{ 0xd61f629c, "dss_get_len_freq_log_by_cpu" },
	{ 0x8557039d, "dss_get_vaddr_freq_log_by_cpu" },
	{ 0xa178b279, "dss_get_last_paddr_irq_log" },
	{ 0x85fdddd7, "dss_get_sizeof_irq_log" },
	{ 0x86aee7a8, "dss_get_len_irq_log_by_cpu" },
	{ 0x7d5cd65a, "dss_get_vaddr_irq_log_by_cpu" },
	{ 0xc50442b7, "dss_get_last_paddr_work_log" },
	{ 0x1282afd2, "dss_get_sizeof_work_log" },
	{ 0xf449984d, "dss_get_len_work_log_by_cpu" },
	{ 0xa701f94c, "dss_get_vaddr_work_log_by_cpu" },
	{ 0xfe73470, "dss_get_last_paddr_task_log" },
	{ 0x17481bb7, "dss_get_sizeof_task_log" },
	{ 0x560c64f9, "dss_get_len_task_log_by_cpu" },
	{ 0x8f36c66b, "dbg_snapshot_get_item_paddr" },
	{ 0x54405f8, "dss_get_vaddr_task_log_by_cpu" },
	{ 0x1c85e87e, "dbg_snapshot_is_minized_kevents" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x1270d593, "vmap" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x39846f3f, "of_count_phandle_with_args" },
	{ 0xb41c2e1a, "secdbg_part_init_bdev_path" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "dss,sec_debug_dprt");

MODULE_ALIAS("of:N*T*Csamsung,sec_debug");
MODULE_ALIAS("of:N*T*Csamsung,sec_debugC*");
