#include "main.h"

/**
 * print_octal - print decimal number in octal base
 * @n: number to convert to octal
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * Return: number of character printed
 */
int print_octal(unsigned int n, char *buffer, int *buffer_index)
{
	int count = 0;
	char c;

	if (n >= 8)
	{
		count += print_octal(n / 8, buffer, buffer_index);
	}
	c = '0' + n % 8;
	count += add_to_buffer(buffer, buffer_index, c);

	return (count);
}

/**
 * print_octal_number - print decimal number in octal base
 * @arg_list: number to convert to octal
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * Return: number of character printed
 */
int print_octal_number(va_list arg_list, char *buffer, int *buffer_index)
{
	int count = 0;
	unsigned int n;

	n = va_arg(arg_list, unsigned int);
	count = print_octal(n, buffer, buffer_index);
	return (count);
}
