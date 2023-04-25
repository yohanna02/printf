#include "main.h"

/**
 * print_integer - prints an integer
 * @n: integer to be printed
 */
int print_integer(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		count += print_integer(num / 10);
	}

	count += _putchar((num % 10) + '0');
	return (count);
}

/**
 * print_number - prints an integer
 * @arg_list: integer to be printed
 */
int print_number(va_list arg_list)
{
	int count = 0, n;

	n = va_arg(arg_list, int);

	count = print_integer(n);

	return (count);
}