#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_integer_recursive - print an integer in recursive
 * @num: pointer of int to print
 *
 * Return: Nothing
 */
void print_integer_recursive(int num)
{
	if (num == 0)
	{
		return;
	}
	print_integer_recursive(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * print_integer - print an integer
 * @args: arguments list
 *
 * Return: Nothing
 */
void print_integer(va_list *args)
{
	int intgr = va_arg(*args, int);

	if (intgr == 0)
	{
		_putchar('0');
		return;
	}

	if (intgr < 0)
	{
		_putchar('-');
		intgr = -intgr;
	}
	print_integer_recursive(intgr);
}

/**
 * print_string - print a string of character
 * @args: arguments list
 *
 * Return: Nothing
 */
void print_string(va_list *args)
{
	char *s = va_arg(*args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

/**
 * print_char - function that prints a single character
 * @args: arguments list
 *
 * Return: print the specified character
 */
void print_char(va_list *args)
{
	char c = (char)va_arg(*args, int);

	_putchar(c);
}
