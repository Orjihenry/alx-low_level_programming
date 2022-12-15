#include"main.h"

/**
 * print_triangle - Prints a triangle.
 *
 * @size: Parameter for size of the triangle.
 *
 * Return: Success 0
*/

void print_triangle(int size)
{
	int hght, base;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (hght = 1; hght <= size; ++hght)
		{
			for (base = 1; base <= size; ++base)
			{
				if ((hght + base) <= size)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar(10);
		}
	}
}
