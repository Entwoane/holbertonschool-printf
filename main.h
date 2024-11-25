#ifndef MAIN_H
#define MAIN_H
/**
 * struct spec - structure with all the format specifiers
 * @spec: format specifier
 */
typedef struct spec
{
	char *spec;
	void(*print)(char, ...);

} spec_format;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(const char *format, ...);

#endif
