#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _printf - Custom printf function
 * @format: string format
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
	int i = 0, j = 0, count = 0;
	int (*f)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			f = select_specifier(format[i + 1]);
			if (f != NULL)
			{
				j = 0;
				j += f(arg_list);
				if (j == -1)
					return (-1);
				count += j;
			}
			if (f == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(arg_list);
	return (count);
}
