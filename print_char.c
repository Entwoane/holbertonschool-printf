#include <stdarg.h>
#include "main.h"
/**
 * print_char - function that prints a single character
 * @args: argument list
 *
 * Return: print the specified character
 */
void print_char(va_list *args)
{
	char c = (char)va_arg(*args, int);

	_putchar(c);
}
