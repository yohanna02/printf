#include "main.h"

/**
 * print_hex - print hex representation of @n
 * @n: number to print
 * @uppercase: print uppercase
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * Return: number of characters printed
 */
int print_hex(unsigned int n, int uppercase, char *buffer, int *buffer_index)
{
	char c;
	int count = 0;

	if (n >= 16)
	{
		count += print_hex(n / 16, uppercase, buffer, buffer_index);
	}
	if (n % 16 < 10)
	{
		c = '0' + n % 16;
	}
	else
	{
		c = (uppercase ? 'A' : 'a') + n % 16 - 10;
	}
	count += add_to_buffer(buffer, buffer_index, c);

	return (count);
}

/**
 * print_hex_x - print hex representation of a number
 * @arg_list: list of numbers to print
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * Return: number of characters printed
 */
int print_hex_x(va_list arg_list, char *buffer, int *buffer_index)
{
	int count = 0;
	unsigned int n;

	n = va_arg(arg_list, unsigned int);
	count = print_hex(n, 0, buffer, buffer_index);

	return (count);
}

/**
 * print_hex_X - print hex representation of a number
 * @arg_list: list of numbers to print
 * @buffer: the buffer to add the string to
 * @buffer_index: the index of the string
 * Return: number of characters printed
 */
int print_hex_X(va_list arg_list, char *buffer, int *buffer_index)
{
	int count = 0;
	unsigned int n;

	n = va_arg(arg_list, unsigned int);
	count = print_hex(n, 1, buffer, buffer_index);

	return (count);
}
