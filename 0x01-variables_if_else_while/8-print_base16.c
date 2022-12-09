#include <stdio.h>

/**
* main - Prints the lowercase alphabet in reverse,
*	followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int d;

	for (d = 122; d >= 97; d--)
	{
		putchar(d);
	}
	putchar("\n");
	return (0);
}
