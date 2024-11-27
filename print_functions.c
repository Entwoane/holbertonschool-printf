#include "main.h"
#include <stdarg.h>
/**
 * print_char - Print a character
 * @args: va_list containing the character to print
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - Print a string
 * @args: va_list containing the string to print
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";
	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}

/**
 * print_percent - Print a percent sign
 * @args: Unused va_list
 * Return: Number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

/**
 * print_number - Helper function to print an integer recursively
 * @n: Integer to be printed
 * Return: Number of characters printed
 */
int print_number(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_number(n / 10);

	count += _putchar((n % 10) + '0');
	return (count);
}

/**
 * print_integer - Print an integer from va_list
 * @args: va_list containing the integer to print
 * Return: Number of characters printed
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
		num = n;

	count += print_number(num);
	return (count);
}
