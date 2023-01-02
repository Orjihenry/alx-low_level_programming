#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 *
 * @dest: parameter to be copied to
 * @src: parameter to copy
 * @n: number of bytes to copy
 *
 * Return: Success 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
