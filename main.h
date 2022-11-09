#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);


/**
  * struct print - structure for printing
  * @type: type of what will be printed
  * @f: function to perform
  *
  */

typedef struct print
{
	char *type;
	int (*f)(va_list list);
} print;

int string_print(va_list list);
int char_print(va_list list);
int percent_print(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
int get_print(const char *format, print prints[], va_list list);


#endif
