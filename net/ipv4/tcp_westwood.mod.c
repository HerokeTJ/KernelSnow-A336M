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
	{ 0x15ba50a6, "jiffies" },
	{ 0x227ff6bd, "tcp_unregister_congestion_control" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x34dbb105, "tcp_reno_undo_cwnd" },
	{ 0xe052e0c3, "tcp_reno_cong_avoid" },
	{ 0xe76d32b, "tcp_reno_ssthresh" },
	{ 0x830d1ca5, "tcp_register_congestion_control" },
};

MODULE_INFO(depends, "");

