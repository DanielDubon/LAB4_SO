#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

int simple_init(void) {
    printk(KERN_INFO "Loading Module\nMensaje personalizado de carga\n");
    return 0;
}

void simple_exit(void) {
    printk(KERN_INFO "Removing Module\nMensaje personalizado de eliminación\n");
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Este módulo es un ejemplo para el laboratorio");
MODULE_AUTHOR("Mi Nombre");
