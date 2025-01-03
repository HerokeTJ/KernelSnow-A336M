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
	{ 0x5495392, "hid_debug" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x5954b3b9, "hid_unregister_driver" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x62d87780, "__hid_request" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xc5850110, "printk" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x231c132e, "input_ff_create_memless" },
	{ 0xcc0f3a8c, "hid_open_report" },
	{ 0xdae460c7, "hid_hw_stop" },
	{ 0x2f71a7a9, "hid_hw_start" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xbe362106, "__hid_register_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00000079p00000006");
MODULE_ALIAS("hid:b0003g*v00000079p00000011");
