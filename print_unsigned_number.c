#include "main.h"

/**
 * print_unsigned_integer - prints an unsigned integer
 * @n: integer to be printed
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * Return: number of characters printed
 */
int print_unsigned_integer(unsigned int n, char *buffer, int *buffer_index)
{
	int count = 0;

	if (n / 10)
	{
		count += print_unsigned_integer(n / 10, buffer, buffer_index);
	}

	count += add_to_buffer(buffer, buffer_index, (n % 10) + '0');
	return (count);
}

/**
 * print_unsigned_number - prints an integer
 * @arg_list: integer to be printed
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * Return: number of characters printed
 */
int print_unsigned_number(va_list arg_list, char *buffer, int *buffer_index)
{
	int count = 0;
	unsigned int n;

	n = va_arg(arg_list, unsigned int);

	count = print_unsigned_integer(n, buffer, buffer_index);
	return (count);
}
