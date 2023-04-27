#include "main.h"
#include <stdarg.h>

/**
 * print_percent - print a percentage
 * @arg_list: params
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * Return: 1
 */
int print_percent(va_list arg_list, char *buffer, int *buffer_index)
{
	UNUSED(arg_list);
	add_to_buffer(buffer, buffer_index, '%');

	return (1);
}
