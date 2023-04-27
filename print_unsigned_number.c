#include "main.h"

/**
 * print_unsigned_integer - prints an unsigned integer
 * @n: integer to be printed
 * Return: number of characters printed
 */
int print_unsigned_integer(unsigned int n)
{
	int count = 0;

	if (n / 10)
	{
		count += print_unsigned_integer(n / 10);
	}

	count += _putchar((n % 10) + '0');
	return (count);
}

/**
 * print_unsigned_number - prints an integer
 * @arg_list: integer to be printed
 * Return: number of characters printed
 */
int print_unsigned_number(va_list arg_list)
{
	int count = 0;
	unsigned int n;

	n = va_arg(arg_list, unsigned int);

	count = print_unsigned_integer(n);

	return (count);
}
