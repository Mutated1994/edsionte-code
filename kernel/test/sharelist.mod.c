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
	{ 0xad12b0d5, "module_layout" },
	{ 0xfc43f5ac, "per_cpu__current_task" },
	{ 0xfac3858a, "kmalloc_caches" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x6307fc98, "del_timer" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb72397d5, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x45450063, "mod_timer" },
	{ 0x46085e4f, "add_timer" },
	{ 0xdeabe977, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e9ebb05, "kernel_thread" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D9AC34AE5EC7CA744BC4609");
