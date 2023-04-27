#include "main.h"

/**
 * print_binary_reursion - print number to binary
 * @n: va argument list
 * Return: return binary string
 */
int print_binary_reursion(unsigned int n)
{
	int count = 0;

	if (n > 1)
		print_binary_reursion(n >> 1);

	count += _putchar((n & 1) ? '1' : '0');

	return (count);
}

/**
 * print_binary - print number to binary
 * @arg_list: va argument list
 * Return: return binary string
 */
int print_binary(va_list arg_list)
{
	int n;

	n = va_arg(arg_list, int);

	return (print_binary_reursion(n));
}
