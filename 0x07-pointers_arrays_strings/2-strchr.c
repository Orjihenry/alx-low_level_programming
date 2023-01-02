#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 *
 * @s: parameter to search
 * @c: parameter to find
 *
 * Return: pointer to first occurrence of the character or NULL
 */

char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
