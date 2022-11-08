#include "main.h"
/**
 * string_print - prints an entire string
 * @list: arguments in our printf function
 *
 * Return: size of what will be printed
 */
int string_print(va_list list)
{
	int i; /* the incrementation of i will give the size of string*/
	char *s = va_arg(list, char *);
	/*ptr to a char to get every char of the string*/
	/*loop s[i] to putchar all char of string*/
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	/*return size of have been printed*/
	return (i);
}
