#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* print_char - prints chat to output
* @arg: char args
* Return: 1
*/

int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));

}

/**
 * print_str - prints string
 * @arg: args
 * Return: no of chars printed
 */

int print_str(va_list arg)
{
	int count;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
	_putchar(str[count]);
	}
	return (count);
}

/**
 * print_int - prints integers
 * @arg: args
 * Return: 0
 */

int print_int(va_list arg)
{
	int digit = va_arg(srg, int);
	unsigned int a = 1, i, result, charp = 0;

	if (digit < 0)
	{
		_putchar('-');
		charp++;
		digit = digit * (-1);
	}
	for (i = 0; digit / a > 9; i++, a *= 10)
	;
	for (; a>= 1; digit %= a, a /= 10, charp++)
	{
		result = digit / a;
		_putchar('0' + result);
	}
	return (charp);

}
