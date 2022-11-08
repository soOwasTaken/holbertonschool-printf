#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);

typedef struct print
{
	char *type;
	void (*f)(va_list list);
} print;

int spring_print(va_list list);
int char_print(va_list list);
int percent_print(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);



#endif
