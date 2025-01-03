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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xa4033df7, "dbg_snapshot_expire_watchdog" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xa6257a2f, "complete" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xbbd62b47, "devm_platform_ioremap_resource" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x9166fada, "strncpy" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xd653b126, "sched_clock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
};

MODULE_INFO(depends, "dss");

