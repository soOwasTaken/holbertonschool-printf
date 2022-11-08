#include "main.h"

/**
 * percent_print - prints the percentage sign
 * @list:  arguments of our printf
 *
 * Return: the size of what have been printed (1)
 *
 */
int percent_print(va_list list)
{
(void)list;

char c = '%';
_putchar(c);

return (1);
}
