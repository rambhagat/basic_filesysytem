//debug helper functions

#include <linux/printk.h>
#include <linux/module.h>


#ifdef DEBUG
static void printascii(char *buf)
{
    int len;
    int i;

    if ( !buf )
        return;

    len = (int)strlen(buf);
    if(len >0) 
    {
        for(i=0; i < len; i++)
        {
            printk("%hhx ",*((char *)buf +i));
        }
        printk("\n");
    }
}

void debug(const char *str)
{
    printk("%s\n",str);
}

void debug_printf(const char *fmt, ...)
{

	char buffer[128];
    va_list ap;

    va_start(ap, fmt);
    vsprintf(buffer, fmt, ap);
    va_end(ap);

    printascii(buffer);
}
#else
#define debug_printf(x, ...)  do  { } while (0)
#endif

