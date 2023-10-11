#include <linux/syscalls.h>

SYSCALL_DEFINE0(mycall)
{
	printk("HanseongLee System Call!\n");

	return 0;
}
