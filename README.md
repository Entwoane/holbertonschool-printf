
# **\_PRINTF**


This is our \_printf function which reproduce the simple printf function.
Based on the different specifiers, our function is able to print string, integers and character.

### **How does it work**


![Flowchart (1)](https://github.com/user-attachments/assets/dfa69d18-36b4-4581-a74e-2e98870582b0)



The file ***main.h*** is our header file. It has all the prototypes and the structure used for **\_printf**.

The file ***print_functions.c*** has all our functions needed to our **\_printf** to work correctly. For example if you want to see how you can print a string, you will find the source code of *print_string* inside of ***print_functions.c***.
```c
#include "main.h"

#include <stdarg.h>

  

/**

* print_string - print a string of character

* @args: pointer of arguments of the string to print

*

* Return: Nothing

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

```

The file ***\_printf.c***  is the file which will print your arguments with the help of ***main.h*** and ***print_functions.c***.


The compiler used is : ***gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c***

It has been coded and compiled on Ubuntu 24.04.

This code has been tested by us locally, and we used valgrind to check the memory allocation.

Made by: [Antoine Musci](https://github.com/Entwoane) [Kevin Rouget](https://github.com/koryos77) and [Alexandre Mousse](https://github.com/Alex-git-pro).

