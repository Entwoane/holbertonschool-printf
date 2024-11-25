#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * func_helper - function pointer that select the right format specifier
 *@format: format
 *
 * Return: NULL
 */
int (*func_helper(char *format))(va_list *)
{
	spec_format specs[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	int i = 0;

	while (specs[i] != NULL)
	{
		if (strcmp(specs[i].spec, format) == 0)
		{
			return (specs[i].print);
		}
	i++;
	}

	return (NULL);
}
