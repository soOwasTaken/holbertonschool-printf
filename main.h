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

void sprintf(va_list list);



#endif
