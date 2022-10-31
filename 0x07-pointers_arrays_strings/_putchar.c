#include <unistd.h>

/**
 * _putchar - a func that writes a char to stdout
 * @c: char
 * Return: 0 on success, 1 if otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

