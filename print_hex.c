#include "main.h"

/**
 * print_hex - print hex representation of @n
 * @n: number to print
 * @uppercase: print uppercase
 * Return: number of characters printed
 */
int print_hex(unsigned int n, int uppercase)
{
	char c;
	int count = 0;

	if (n >= 16)
	{
		count += print_hex(n / 16, uppercase);
	}
	if (n % 16 < 10)
	{
		c = '0' + n % 16;
	}
	else
	{
		c = (uppercase ? 'A' : 'a') + n % 16 - 10;
	}
	count += _putchar(c);

	return (count);
}

/**
 * print_hex_x - print hex representation of a number
 * @arg_list: list of numbers to print
 * Return: number of characters printed
 */
int print_hex_x(va_list arg_list)
{
	int count = 0;
	unsigned int n;

	n = va_arg(arg_list, unsigned int);
	count = print_hex(n, 0);

	return (count);
}

/**
 * print_hex_X - print hex representation of a number
 * @arg_list: list of numbers to print
 * Return: number of characters printed
 */
int print_hex_X(va_list arg_list)
{
	int count = 0;
	unsigned int n;

	n = va_arg(arg_list, unsigned int);
	count = print_hex(n, 1);

	return (count);
}
