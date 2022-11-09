#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
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

int _putchar(char c);
int percent_print(va_list list);
int char_print(va_list list);
int string_print(va_list list);
int _printf(const char *format, ...);
int get_print(const char *format, print prints[], va_list list);

#endif
