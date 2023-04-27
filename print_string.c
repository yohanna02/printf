#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _puts - prints a string
 * @str: string to print
 * Return: number of printed characters
 */
int _puts(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}

	return (count);
}

/**
 * print_string - prints string
 * @arg_list: string to print
 * Return: number of printed characters
*/
int print_string(va_list arg_list)
{
	int i = 0, count = 0;
	char *str = va_arg(arg_list, char *);

	if (str == NULL)
	{
		count = _puts("(null)");
		return (count);
	}
	while (str[i])
	{
		count += _putchar(str[i]);
		i++;
	}
	return (count);
}
