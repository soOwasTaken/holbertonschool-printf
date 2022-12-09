<<<<<<< HEAD
#ifndef main_h
#define main_h
#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/**
  * struct Command - structure for printing
  * @name: name of the fonction
  * @func: function to perform
  *
  */
typedef struct Command
{
	char *name;
	int (*func)(char **);
} Command;

int exit_shell(char **args);
int ls(char **args);
int cd(char **args);
int execute_path(char *command, char **args);
void read_and_parse_command(char **command, char ***args);
void execute_command(char *command, char **args);
void execute_command2(void);
void execute(char **args);
char **read_command(void);
int env(char **args);
extern char **environ;
static const Command commands[] = {
	{ "ls", ls },
	{ "cd", cd },
	{ "exit", exit_shell },
	{ "env", env },
	{ NULL, NULL }
};
=======
#ifndef MAIN_H
#define MAIN_H

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
  * @type: type of what will be printed
  * @f: function to perform
  *
  */

typedef struct print_t
{
	char *type;
	int (*f)(va_list);
} print_t;
>>>>>>> a164108b0c31ff97e3278030dad4add3c33c1a18

#endif
