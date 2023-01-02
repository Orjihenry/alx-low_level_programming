#include "main.h"

/**
 * _strspn - Function that gets the length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: Success 0
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1; /*flag status*/
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0; /*success*/
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}

	return (i);
}
