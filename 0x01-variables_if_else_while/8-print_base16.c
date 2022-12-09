#include <stdio.h>

/**
* main - Prints the lowercase alphabet in reverse,
*	followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int q = 48;

	while (q <= 102)
	{
		putchar(q);

		if (q == 57)
			q += 39;
		++q;
	}
	putchar(10);
	return (0);
}
