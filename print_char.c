#include "main.h"
#include <stdarg.h>

/**
 * print_char - print a character
 * @arg_list: arguments
 * Return: number of characters printed
 */
int print_char(va_list arg_list, char *buffer, int *buffer_index)
{
	int i;
	char c = va_arg(arg_list, int);

	i = add_to_buffer(buffer, buffer_index, c);
	return (i);
}
