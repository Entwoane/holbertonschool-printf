#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int index = 0, count = 0, indexfrmt;
	va_list args;
	format_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
		{0, NULL}
	};

	va_start(args, format);
	if (format == NULL)
	{
		return (1);
	}
	while (format && format[index])
	{
		if (format[index] == '%')
		{
			indexfrmt = 0;
			index++;
			while (formats[indexfrmt].specifier)
			{
				if (format[index] == formats[indexfrmt].specifier)
				{
					count += formats[indexfrmt].print_func(args);
					break;
				}
				indexfrmt++;
			}
			if (!formats[indexfrmt].specifier)
				count += _putchar('%') + _putchar(format[index]);
		}
		else
			count += _putchar(format[index]);
		index++;
	}
	va_end(args);
	return (count);
}
