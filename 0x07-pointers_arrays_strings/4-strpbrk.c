#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 *
 * @s: parameter to search
 * @accept: string containing the bytes to search for
 *
 * Return: Return matching bytes or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
