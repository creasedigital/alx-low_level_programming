#include <stdio.h>
#include "main.h"

/**
 * main - a prog that prints no of args
 * @argc: number of args
 * @argv: args strings
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	print("%d\n", argc);

	return (0);
}
