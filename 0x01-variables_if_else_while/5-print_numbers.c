#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10
*	starting from 0, followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		printf("%d", d);
		++d;
	}
	printf(10);
	return (0);
}
