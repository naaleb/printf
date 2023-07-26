#include "main.h"

/**
 * get_width - A function to calculate the width to be printed
 * @format: Formatted string to print arguments.
 * @i: Arguments list to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 * By Hermas and Almond
 */
int get_width(const char *format, int *i, va_list list)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (width);
}

