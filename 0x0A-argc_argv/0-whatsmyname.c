#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * @argc: count of args
 * @argv: arguments string
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}
