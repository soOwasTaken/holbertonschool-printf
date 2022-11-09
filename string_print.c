#include "main.h"

/**
 * string_print - prints the entire string
 * @list: printf arguments
 *
 * Return: size of what is printed
 *
 */

int string_print(va_list list)
{
	int i;
	char *str2;

	str2 = va_arg(list, char *);

	if (str2 == NULL)
	{
		_printf("(null)");
		return (6);
	}
	for (i = 0; str2[i] != '\0'; i++)
		_putchar(str2[i]);
	return (i);
}
