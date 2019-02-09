// This software follows GPL LIcense
/* This is main file of basic file system. It registers the basic file system with kernel and unregisrs it.
 */

#include <linux/module.h>
#include <linux/fs.h>
#include "debug.h"

static struct file_system_type basic_fs_type = {
    .owner      = THIS_MODULE,
    .name       = "basicfs",
    //.mount      = basic_mount,
    .fs_flags   = 0
};

int init_module(void)
{
    int rc;

    rc = register_filesystem(&basic_fs_type);
    if (rc) {
        debug("Error in registering Basic file system");
    }
    else
    {
        debug("Basic file system loaded");
        debug_printf("Basic file system  %s\n",__func__);
    }
    return 0;
}
void cleanup_module(void)
{
    debug("EXiting");
    unregister_filesystem(&basic_fs_type);
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ram Gupta");
