#include "holberton.h"
/**
 * _memcpy - copies n bytes form the memory area src
 * to memory area dest
 * @src: source code to copy
 * @dest: paramater for destination to  copy to
 * @n: how many bytes to copy
 * Return: dest;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
