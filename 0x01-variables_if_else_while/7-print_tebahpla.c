#include <stdio.h>

/**
* main - Prints the lowercase alphabet in reverse,
*	followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int q;

	for (q = 122; q >= 97; q--)
	{
		putchar(q);
	}
	putchar(10);
	return (0);
}
