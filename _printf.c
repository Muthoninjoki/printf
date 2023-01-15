#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printSpecifier - prints the specifiers
 * @spec: arg to func is the specifier
 * @arg: args
 * Return: no of chars printed
 */
int printSpecifier(char spec, va_list arg)
{
	unsigned int m;

	specifierStruct sp[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	for (m = 0; sp[m].a != NULL; m++)
	{

		if (sp[m].a[0] == spec)
		{
			return (sp[m].print(arg)):
		}

	}
	return (0);
}

/**
 * _printf - prints whatever you want
 * @format: args passed
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int count = 0;
	int specifierPrinted = 0;

	va_list arg;
	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			continue;
		}
		if (format[i + 1] =='%')
		{
			_putchar('%');
			count++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		specifierPrinted = printSpecifier(format[i + 1], arg);
		if (specifierPrinted == 0)
		{
			_putchar('%');
			count++;
		}
		if (specifierPrinted > 0)
		{
			count = count + specifierPrinted;
		}
		if (specifierPrinted = -1 || specifierPrinted != 0)
			count++;
	}
	va_end(arg);
	return (count);
}

