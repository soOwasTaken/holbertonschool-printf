#include "main.h"

/**
 * char_print - prints a char
 *
 * @list: arguments in our printf function
 * Return: 1 (size of a char)
 */

int char_print(va_list list)
{
	/*Declare a char that we will be the argument in printf*/
	char c = va_arg(list, int);

	/*print this argument*/
	_putchar(c);

	/*the function returns the size of what it printed*/
	return (1);
}


