#include <unistd.h>

/**
 * _putchar - a func that writes a char to stdout
 * @c: char input
 * Return: always return 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


