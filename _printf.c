#include "main.h"
/**
 * _printf - prints an entire string
 * @format: arguments in our printf function
 *
 * Return: size of what will be printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int j = strlen(format);

	while (i < j)
	{
		if (format[i] == '%')
		{
			i++;
			/* get_print() */
			break;
		}
		_putchar(format[i]);
		i++;
	}
	_putchar('\n');
	return (j);
}
