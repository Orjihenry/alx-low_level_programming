#include <stdio.h>

/**
* main - a program that prints the alphabet in lowercase,
* 	 followed by a new line.
*
* Return: Always 0
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{ 
		putchar(ch);
			++ch;
	}
	putchar(10); /*New line in ASCII code format*/

	return (0);
}
