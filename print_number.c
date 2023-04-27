#include "main.h"

/**
 * print_integer - prints an integer
 * @n: integer to be printed
 * Return: number of characters printed
 */
int print_integer(int n, char *buffer, int *buffer_index)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += add_to_buffer(buffer, buffer_index, '-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		count += print_integer(num / 10, buffer, buffer_index);
	}

	count += add_to_buffer(buffer, buffer_index, (num % 10) + '0');
	return (count);
}

/**
 * print_number - prints an integer
 * @arg_list: integer to be printed
 * Return: number of characters printed
 */
int print_number(va_list arg_list, char *buffer, int *buffer_index)
{
	int count = 0, n;

	n = va_arg(arg_list, int);

	count = print_integer(n, buffer, buffer_index);

	return (count);
}
