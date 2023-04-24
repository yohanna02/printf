#include <unistd.h>

/**
 * print_string - prints string
 * @str: string to print
 * Return: number of printed characters
*/
int print_string(const char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
