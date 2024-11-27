#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct format_specifier - format spec
 * @specifier: spec
 * @print_func: pointer
 */
typedef struct format_specifier
{
	char specifier;
	int (*print_func)(va_list);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);

#endif
