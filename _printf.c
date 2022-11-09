#include "main.h"

/**
 * get_print - use fonctions to print using array
 * @getChar: char assigned to fonctions
 * @list: arguments list going into fonction called
 * Return: sucess
 */

int get_print(char getChar, va_list list)
{
	int i = 0;

	print_t fonctions[] = {
		{"s", string_print},
		{"c", char_print},
		{"%", percent_print},
		{NULL, NULL}
	};
	/*For loop that check for the character*/
	/*Return the assigned fonction[i] == getChar */
	for (i = 0; fonctions[i].type != NULL; i++)
	{
		if (fonctions[i].type[0] == getChar)
			return (fonctions[i].f(list));
	}
	return (0);
}

/**
 * _printf - print by format, and arguments.
 * @format: arguments in our printf function
 *
 * Return: size of what will be printed
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int nFonctionCalled = 0, charPrinted = 0;
	va_list list;

	va_start(list, format);

	if (format == NULL) /* Return -1 if format is NULL */
		return (-1);

	/* Going through the format to the null character */
	for (i = 0; format[i] != '\0' ; i++)
	{
		if (format[i] != '%') /* Print everything while != % and count charPrinted */
		{
			_putchar(format[i]);
			charPrinted++;
			continue;
		}
		if (format[i + 1] == '%') /* If the format + 1 is %, it print a % */
		{
			percent_print(list);
			charPrinted++;
			i++;
			continue;
		}
		/* Check for character de format[i+1] and use get_print */
		nFonctionCalled = get_print(format[i + 1], list);
		if (nFonctionCalled == -1 || nFonctionCalled != 0)
			i++;
		/* if number of fonction called is above 0 ; add both lenght */
		if (nFonctionCalled > 0)
			charPrinted += nFonctionCalled;
	}
	va_end(list);
	return (charPrinted); /* return lenght of what will be printed */
}
