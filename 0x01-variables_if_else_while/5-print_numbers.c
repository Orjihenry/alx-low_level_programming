#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10
*	starting from 0, followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int nums = 0;

	while (nums <= 9)
	{
		printf("%i", nums);
		++nums;
	}
	printf(10);
	return (0);
}
