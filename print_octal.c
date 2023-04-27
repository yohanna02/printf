#include "main.h"

/**
 * print_octal - print decimal number in octal base
 * @n: number to convert to octal
 * Return: number of character printed
 */
int print_octal(unsigned int n)
{
	int count = 0;
	char c;

	if (n >= 8)
	{
		count += print_octal(n / 8);
	}
	c = '0' + n % 8;
	count += _putchar(c);

	return (count);
}

/**
 * print_octal_number - print decimal number in octal base
 * @arg_list: number to convert to octal
 * Return: number of character printed
 */
int print_octal_number(va_list arg_list)
{
	int count = 0;
	unsigned int n;

	n = va_arg(arg_list, unsigned int);
	count = print_octal(n);

	return (count);
}
