#include "main.h"
#include <unistd.h>
/**
 * my_printf - custom printf to handle conversion specifiers %d and %i
 * @format: format string containing conversion specifiers
 * @...: variable number of arguments to print
 *
 */
void my_printf(const char *format, ...)
{
	char buffer[256];
	int buffer_len = 0;
	int num = va_arg(args, int);
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'd' || *format == 'i')
			{
				buffer_len = snprintf(buffer, sizeof(buffer), "%d", num);
				write(1, buffer, buffer_len);
			}
			format++;
		}
		else
		{
			write(1, format, 1);
		}
		format++;
	}

	va_end(args);
}
