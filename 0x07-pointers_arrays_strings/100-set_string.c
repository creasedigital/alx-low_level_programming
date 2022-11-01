#include "main.h"

/**
 * set_string - sets the value of the pointer to a char
 * @s: pointer to a pointer
 * @to: pointer to a new address
 */

void set_string(char **s, char *to)
{
	*s = to;
}
