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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x65671f08, "param_ops_bool" },
	{ 0xac2da7fb, "sec_kn_unregister_notifier" },
	{ 0x939fc2ef, "hrtimer_start_range_ns" },
	{ 0xef93df4b, "hrtimer_try_to_cancel" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x986f7ca8, "of_find_node_opts_by_path" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xf1e046cc, "panic" },
	{ 0xe9637795, "sec_kn_register_notifier" },
	{ 0x3ebd5214, "hrtimer_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "sec_key_notifier");

