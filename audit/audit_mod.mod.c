#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba12089, "module_layout" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x67053080, "current_kernel_time" },
	{ 0x8b18496f, "__copy_to_user_ll" },
	{ 0x8a01e6cb, "my_sys_audit" },
	{ 0x936f4743, "current_task" },
	{ 0xb72397d5, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf3341268, "__clear_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x18defccf, "my_getaudit" },
	{ 0x4292364c, "schedule" },
	{ 0xf09c7f68, "__wake_up" },
	{ 0xe75663a, "prepare_to_wait" },
	{ 0xb00ccc33, "finish_wait" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8A168B4955284270563A36F");
