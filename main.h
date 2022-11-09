#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int string_print(va_list list);
int char_print(va_list list);
int percent_print(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
int get_print(char getChar, va_list list);

/**
  * struct print_t - structure for printing
=======
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
  * struct print - structure for printing
>>>>>>> cd3094400026798484ed4552ea6286b345520166
  * @type: type of what will be printed
  * @f: function to perform
  *
  */
<<<<<<< HEAD

typedef struct print_t
{
	char *type;
	int (*f)(va_list);
} print_t;
=======
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
>>>>>>> cd3094400026798484ed4552ea6286b345520166

#endif
