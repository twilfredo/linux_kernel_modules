#include <linux/module.h>
#include <linux/kernel.h> 
#include <linux/init.h>

/* Meta Data */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Wilfred MK WDC");
MODULE_DESCRIPTION("A hello world module");

/** 
 * @brief Entry point when module is loaded into the kernel
 */
static int __init ModuleInit(void) {
    printk("Hello World - 0xDEADB33F\n");
    return 0;
}

/** 
 * @brief Called when the module is removed from the kernel
 */
static void __exit ModuleExit(void) {
    printk("Goodbye Yellow Brick Road\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);