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
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0x67e2f47, "dma_heap_put" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x29ba86d8, "of_n_size_cells" },
	{ 0xc298fad8, "of_n_addr_cells" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x2b593aa8, "gen_pool_alloc_algo_owner" },
	{ 0x2464da17, "gen_pool_size" },
	{ 0xd0d3f0a4, "gen_pool_avail" },
	{ 0xc5850110, "printk" },
	{ 0x5e855e56, "gen_pool_first_fit_align" },
};

MODULE_INFO(depends, "");

