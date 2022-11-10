#include "main.h"

/**
 * _printf - prints its argument
 * @format: arugments
 * Return: size of characters that have been printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int count = -1;

	print prints[] = {
	{"c", char_print},
	{"s", string_print},
	{"%", percent_print},
	{"d", decint_print},
	{"i", decint_print},
	{NULL, NULL}
	};

	if (format != NULL)
	{
		va_start(list, format);
		count = get_print(format, prints, list);
		va_end(list);
	}
	return (count);
}
