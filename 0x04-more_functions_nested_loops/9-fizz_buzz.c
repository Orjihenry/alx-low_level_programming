#include "main.h"
#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line
 *	but for multiples of three prints Fizz instead of the number
 *	and for the multiples of five prints Buzz.
 *
 * Return: Success 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else
		{
			printf(" %d", i);
		}
	}
	printf(10);

	return (0);
}
