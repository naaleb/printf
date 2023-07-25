#include "main.h"

/**
 * _printf - Function that prints output according to a format
 * @format: a character string composing zero or more directives
 * Return: number of chars printed (excluding null byte)
 *By Hermas and Almond
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	char *str;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					putchar(va_arg(args, int));
					counter++;
					break;

				case 's':
					str = va_arg(args, char*);
					while (*str)
					{
						putchar(*str);
						str++;
						counter++;
					}
					break;
				case '%':
					putchar('%');
					counter++;
					break;

				default:
					putchar('%');
					putchar(*format);
					counter = counter + 2;
					break;
			}
		}
		else
		{
			putchar(*format);
			counter++;
		}
		format++;
	}

	va_end(args);

	return (counter);
}
