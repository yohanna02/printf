#include "main.h"

int print_binary(va_list arg_list)
{
	int count = 0, i, n;
	char c;

	n = va_arg(arg_list, int);
	for (i = 7; i >= 0; i--)
	{
		c = (n & (1 << i)) ? '1' : '0';
		count += _putchar(c);
	}

	return (count);
}