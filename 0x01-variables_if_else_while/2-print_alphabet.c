#include <stdio.h>

/**
* main - a program that prints the alphabet in lowercase,
*	 followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
			++ch;
	}
	putchar('\n');
	return (0);
}
