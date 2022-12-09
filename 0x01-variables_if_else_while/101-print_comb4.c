#include<stdio.h>

/**
 * main - Print 0, 1, - 9
 *
 *
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int ch;
int b;
int a;

for (ch = 0; ch < 8; ch++)
{
	for (b = ch + 1; b < 9; b++)
	{
		for (a = b + 1; a < 10; a++)
		{
			putchar((ch % 10) + '0');
			putchar((b % 10) + '0');
			putchar((a % 10) + '0');

			if (ch != 7)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
}
	putchar(10);
	return (0);
}
