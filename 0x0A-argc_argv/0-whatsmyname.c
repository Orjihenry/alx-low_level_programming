#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints the name of the program.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Success 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
