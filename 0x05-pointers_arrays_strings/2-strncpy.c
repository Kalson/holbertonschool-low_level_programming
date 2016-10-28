#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @src: parameter to a src to copy
 * @dest: parameter for dest
 * @n: parameter for number of bytes
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (a != n)
	{
		dest[b] = src[a];
		b++;
		a++;
		if (src[a] == '\0')
		{
			break;
		}
	}
	while (b != n)
		dest[b++] = '\0';
	return (dest);
}
