#include "main.h"
#include <stdarg.h>
/**
 * print_integer_recursive - print an integer in recursive
 * @num: pointer of int to print
 *
 * Return: 0 if success
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
 * @args: pointer of arguments to print
 *
 * Return: 0 if success
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
