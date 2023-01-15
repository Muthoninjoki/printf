#ifndef MAIN_H
#define MAIN_H

/*STRUCTURE*/
#include <stdarg.h>
/**
 * struct spstructure - prints various specifiers
 * @a: specifier
 * @print: func
 */

typedef struct spstructure
{
	char *a;
	int (*print)(va_list);

} specifiersStruct;

/*PROTOTYPES*/
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int print_percent(void);

#endif
