#include "main.h"

/**
 * _printf - prints its argument
 * @format: arugments
 * Return: size of characters that have been printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int length = -1; /*Initialize the length to -1 (error value) */

	print prints[] = {
	{"c", char_print},
	{"s", string_print},
	{"%", percent_print},
<<<<<<< HEAD
	{NULL, NULL} /*declare a list of prints options, used by get_print*/
=======
	{"d", decint_print},
	{"i", decint_print},
	{NULL, NULL}
>>>>>>> Ricardo
	};

	if (format != NULL) /*intrusctions to do only if there are arguments*/
	{
		va_start(list, format);
		length = get_print(format, prints, list); /*assign size of chars to length*/
		va_end(list);
	}
	return (length); /*if no argument return error value, else return size*/
}
