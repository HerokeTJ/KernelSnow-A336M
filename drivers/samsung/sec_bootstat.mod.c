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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7c24b32d, "module_layout" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xd8339549, "param_ops_int" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0xb9997d36, "seq_read" },
	{ 0x6cf1a828, "register_hook_bootstat" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0xc5850110, "printk" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0x20fd21c6, "proc_create" },
	{ 0xd7e3e7ec, "exynos_get_mct_start" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd653b126, "sched_clock" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xd740362b, "seq_printf" },
	{ 0x7d31f6b, "sec_bootstat_get_thermal" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x85dddd2b, "sec_bootstat_get_cpuinfo" },
	{ 0x9166fada, "strncpy" },
};

MODULE_INFO(depends, "dss,sec_class,exynos_mct,exynos_thermal,exynos-acme");

