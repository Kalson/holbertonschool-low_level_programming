#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @s: parameter for the array
 * @b: parameter for the values in the array
 * @n: parameter for the number of times to print the new values
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
