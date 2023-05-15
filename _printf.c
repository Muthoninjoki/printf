#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
	    if (*ptr != '%')
	    {
		write(1, ptr, 1);
		count++;
	    }
	    else if (*(ptr +1) == '%')
	    {
		write(1, "%", 1);
		count++;
		ptr++;
	    }
	    else if (*(ptr + 10 == 'c')
	    {
		char c = va_arg(args, int);
		write(1, &c, 1);
		count++;

