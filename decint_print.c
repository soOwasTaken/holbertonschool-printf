#include "main.h"

/**
 * decint_print - prints a decimal and integer
 * @list: decimal argument
 * Return: counter
 */
int decint_print(va_list list)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0; /*Initialize another variable to store total digits*/
	n = va_arg(list, int);
		if (n < 0) /*number should be negative*/
		{
			absolute = (n * -1);
			count += _putchar('-'); /*add 1 to count, because it printed a '-' sign*/
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1; /*increase count by 1*/
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1) /*run loop till countnum >= 1*/
	{
		/*increment digit count*/
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10; /*remove last digit of countnum*/
	}
	return (count); /*the function return*/
}
