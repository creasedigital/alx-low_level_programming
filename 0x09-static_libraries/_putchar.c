#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes to stdout
 * @c: char input
 * Return: always 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
