#include "main.h"

/**
 * that returns the value of x raised to the power of y
 * @x: int value of base
 * @y: int value of y
 * Return: int result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
