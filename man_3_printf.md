NAME
   _printf
   Function that produces output according to a format.
   
SYNOPSIS
    #include "main.h"
    int _printf(const char *format, ...)
    
DESCRIPTION
    The _printf() function produces output according to a format.
    _printf() write output to the stdout, the standard output stream.

		%c	-	Print a character
		%s	-	Print a string
		%%	-	Print a percentage
		%d	-	Print a decimal
		%i	-	Print an integer

EXAMPLES
    Some examples of common usage.
	_printf("Hello World");
	_printf("I'm", %d,"years old")

RETURN VALUE
	Return the numbers of character counted

DATE
	27 November 2024

AUTHORS
   Antoine MUSCI	
   Kevin ROUGET		
   Alexandre MOUSSE	
