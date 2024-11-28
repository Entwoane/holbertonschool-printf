#include "main.h"
#include <stdarg.h>
/**
 * print_binary - function that convert int argument to binary
 * @args: va_list containing the argument to convert
 * Return: number of character printed
 */
int print_binary(va_list args)
{
	unsigned int number = va_arg(args, int);
	int binaryNum[32];
	int i = 0, count = 0,  j;

	if (number == 0)
	{
		return (_putchar('0'));
	}
	while (number > 0)
	{
		binaryNum[i++] = number % 2;
		number /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar(binaryNum[j] + '0');
	}
	return (count);
}
