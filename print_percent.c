#include "main.h"
#include <stdarg.h>

/**
 * print_percent - print a percentage
 * @arg_list: params
 * Return: 1
 */
int print_percent(__attribute__((unused))va_list arg_list, char *buffer, int *buffer_index)
{
	add_to_buffer(buffer, buffer_index, '%');

	return (1);
}
