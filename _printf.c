#include "main.h"

/**
 * _printf - Custom printf function
 * @format: string format
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
	int i = 0, count = 0;
	char *str, c;

	if (format == NULL)
	{
		return (-1);
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
				count += print_string(str);
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
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(arg_list);
	return (count);
}
