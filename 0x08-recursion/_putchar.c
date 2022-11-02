#include <unistd.h>

/**
 * _putchar - a func that writes to std out
 * @c: a character input
 * Return: 1 if successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
