#include "main.h"
#include <stdarg.h>

/**
 * print_char - print a character
 * @arg_list: arguments
 * Return: number of characters printed
 */
int print_char(va_list arg_list)
{
	char c = va_arg(arg_list, int);

	return (_putchar(c));
}
