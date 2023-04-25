#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_string - prints string
 * @arg_list: string to print
 * Return: number of printed characters
*/
int print_string(va_list arg_list)
{
	int i = 0, count = 0;
	char *str = va_arg(arg_list, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		count += _putchar(str[i]);
		i++;
	}
	return (count);
}
