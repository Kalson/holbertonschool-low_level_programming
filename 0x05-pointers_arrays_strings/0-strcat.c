#include "holberton.h"
/**
 * _strcat -  function that concatenates two strings.
 * @src: parameter to a src
 * @dest: parameter to append
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
