#include <stdio.h>

/**
 * main - Write a program that prints all possible
 *	different combinations of two digits.
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 0; ch < 99; ch++)
	{
		int ch1;

		for (ch1 = ch + 1; ch1 < 100; ch1++)
		{
			putchar((ch / 10) + '0');
			putchar((ch % 10) + '0');
			putchar(' ');
			putchar((ch1 / 10) + '0');
			putchar((ch1 % 10) + '0');

			if (ch != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	putchar(10);
	return (0);
}
