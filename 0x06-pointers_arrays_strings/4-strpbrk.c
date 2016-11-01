#include "holberton.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any
 * of the bytes in the string accept
 * @s: for the char
 * @accept: paramter for accept
 * Return: pointer to the byte s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, t, j;

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
		if (t == 1)
			return (s + i);
		i++;
	}
	return (0);
}
