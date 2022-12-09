#include <stdio.h>

/**
* main - Prints all possible different
*	combinations of two digits.
*
* Return: Always 0
*/

int main(void)
{
	int ch;
	int d;

	for (ch = 0; ch < 9; ch++)
	{
		for (d = ch + 1; d < 10; d++)
		{
			putchar((ch % 10) + '0');
			putchar((d % 10) + '0');

			if (ch != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}
	putchar("\n");
	return (0);
}
