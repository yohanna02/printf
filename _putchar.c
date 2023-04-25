#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * On error, -1 is returned, and errno is set appropriately.
 * @c: character to write
 * Return: -1 on error, 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
