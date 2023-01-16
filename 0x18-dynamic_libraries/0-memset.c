#include "main.h"

/**
 * _memset - a function that fills mem with a const byte
 * @s: pointer
 * @b: char
 * @n: unsigned int
 * Return: the param s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
