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
	/*condition with empty body, to prevent 'unused parameter' error*/
	if (list)
	{
	}

	_putchar('%');
	return (1);

}
