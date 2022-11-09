#include "main.h"

/**
 * get_print - function that selects the correct function to perform
 * @format: argument of our printf function
 * @prints: printing options list
 * @list: arguments of our printf function
 * Return: lenght of what will be printed
 *
 */

int get_print(const char *format, print prints[], va_list list)
{
	int i, k, len = 0;

	for (i = 0; format[i] != '\0'; i++) /*going through argument*/
	{
		if (format[i] == '%') /*if it starts with '%' at any moment */
		{
			if (format[i + 1] == '\0') /*check what follows '%'*/
				return (-1); /*error*/
			k = 0;
			while (prints[k].type != NULL) /*check if %c, %s or %% */
			{
				if (format[i + 1] == prints[k].type[0])
				{
					len = len + prints[k].f(list); /*add to size*/
					break;  /*only if we have %c, %s or %%   */
				}
				k++;
			}
			if (prints[k].type == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0') /*if not %c, %% nor %s  */
				{
					_putchar(format[i]); /*print % + what follows*/
					_putchar(format[i + 1]);
					len = len + 2; /*add 2 to lenghts because %+char */
				}
				else
					return (-1); /*error*/
			}
			i++; /*continue if % + space*/
		}
		else
		{
			_putchar(format[i]); /*loop and print everything til there is %*/
			len++; /* add 1 to lenght at each character printed*/
		}
	}
	return (len);  /*return lenght of what have been printed*/
}


