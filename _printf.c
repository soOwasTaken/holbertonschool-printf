#include "main.h"
/**
 * _printf - prints an entire string
 * @format: arguments in our printf function
 *
 * Return: size of what will be printed
 */

int _printf(const char *format, ...)
{
va_list list;
int count = -1;

print prints[] = {
{"c", char_print},
{"s", string_print},
{"%", percent_print},
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
