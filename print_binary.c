#include "main.h"

/**
 * print_binary - print number to binary
 * @arg_list: va argument list
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * Return: return binary string
 */
int print_binary(va_list arg_list, char *buffer, int *buffer_index)
{
	int count = 0, i;
	unsigned int n;
	char c;

	n = va_arg(arg_list, int);
	for (i = 31; i >= 0; i--)
	{
		c = (n & (1 << i)) ? '1' : '0';
		count += add_to_buffer(buffer, buffer_index, c);
	}
	return (count);
}
