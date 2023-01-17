#include <unistd.h>

/**
 * _putchar - writes a char to stdout
 * @c: the char to print
 * Return: 1 on success err -1 and err no set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
