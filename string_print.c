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
	char *str;  /*Declare a pointer to a string*/

	str = va_arg(list, char *);  /*Initialize pointer to each argument of list*/

	if (str == NULL)
	{
		_printf("(null)");  /*return value if no argument*/
		return (6);   /*size of "(null)" */
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);  /*loop until the last argument and print each one */
	return (i);  /*return the number of iteration*/
			/*which equals the number of characters*/
}
