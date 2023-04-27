#include "main.h"

int print_binary(va_list arg_list)
{
	int count = 0, i;
	unsigned int n;
	char c;

	n = va_arg(arg_list, int);
	for (i = 31; i >= 0; i--)
	{
		c = (n & (1 << i)) ? '1' : '0';
		count += _putchar(c);
	}
	
	return (count);
}
