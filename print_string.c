#include "main.h"
#include <stdarg.h>

/**
 * print_string - print a string of character
 * @args: pointer of arguments of the string to print
 *
 * Return: Nothing
 */
void print_string(va_list *args)
{
	char *s = va_arg(*args, char *);
	{
		_putchar(*s);
		s++;
	}
}
