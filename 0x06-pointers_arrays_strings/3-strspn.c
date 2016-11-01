#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - returns number of bytes in the initial sengment s
 * @s: for the count action
 * @accept: parameter for char
 * Return: number of bytes;
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int i, j, t;

	i = 0;
	while (s[i] != '\0')
	{
		t = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				t = 1;
		}
		j = 0;
		if (t == 0)
			break;
		num++;
		i++;
	}
	return (i);
}
