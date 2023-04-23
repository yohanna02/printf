#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: string format
 * Return: number of printed characters
*/
int _printf(const char *format, ...)
{
	va_list arg_list;
	int i = 0, j, count = 0;
	char c;
	char *str;

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
					write(1, &c, 1);
					count++;
					break;
				case 's':
					str = va_arg(arg_list, char *);
					for (j = 0; str[j] != '\0'; j++)
					{
						write(1, &str[j], 1);
						count++;
					}
					break;
				case '%':
					/* va_arg(arg_list, int); */
					write(1, "%%", 1);
					count++;
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
