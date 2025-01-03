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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x72edf918, "__tracepoint_kfree_skb" },
	{ 0x1491b86a, "__tracepoint_android_vh_ptype_head" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc427c067, "init_net" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc3fe54ad, "register_net_sysctl" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x87b7c32d, "skb_copy_ubufs" },
	{ 0x250f3ecf, "__netdev_alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbcf85bc0, "__alloc_skb" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0x22abc70f, "__kfree_skb" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x890c62fc, "skb_put" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xc5850110, "printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a921311, "strncmp" },
};

MODULE_INFO(depends, "");

