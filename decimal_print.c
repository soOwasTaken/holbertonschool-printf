#include "main.h"

/**
 * decimal_print - prints a decimal
 * @list: decimal argument
 * Return: counter
 */
int decimal_print(va_list list)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(list, int);
		if (n < 0)
		{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
