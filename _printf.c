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
	int i = 0, count = 0;
	char c;
	char *str;

	if (format == NULL)
	{
		return (0);
	}

	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				c = va_arg(arg_list, int);
				count += write(1, &c, 1);
				break;
			case 's':
				str = va_arg(arg_list, char *);
				for (j = 0; str[j] != '\0'; j++)
				{
					count += write(1, &str[j], 1);
				}
				break;
			case '%':
				count += write(1, "%%", 1);
				break;
			default:
				count += write(1, "%%", 1);
				count += write(1, &format[i], 1);
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(arg_list);
	return (count);
}
