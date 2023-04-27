#include "main.h"
#include <stddef.h>

/**
 * print_pointer - prints the address of a pointer
 * @arg_list: arg list
 * @buffer: buffer to store character
 * @buffer_index: index to the buffer
 * Return: number of characters printed
 */
int print_pointer(va_list arg_list, char *buffer, int *buffer_index)
{
	void *p = va_arg(arg_list, void *);
	unsigned long n = (unsigned long)p;
	int count = 0;
	char hex_digits[] = "0123456789abcdef";
	char hex[15];
	int i = 0;

	if (p == NULL)
	{
		count = _puts("(nil)", buffer, buffer_index);
		return (count);
	}
	count += add_to_buffer(buffer, buffer_index, '0');
	count += add_to_buffer(buffer, buffer_index, 'x');
	if (n == 0)
	{
		count += add_to_buffer(buffer, buffer_index, '0');
		return (1);
	}
	while (n > 0)
	{
		hex[i++] = hex_digits[n % 16];
		n /= 16;
	}
	while (--i >= 0)
		count += add_to_buffer(buffer, buffer_index, hex[i]);

	return (count);
}
