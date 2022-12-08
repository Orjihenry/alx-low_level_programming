#include<unistd.h>

/**
 * main - Prints out the last part of a quote in the standard error.
 *
 *
 *
 * Return: This time we return an error 1.
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
