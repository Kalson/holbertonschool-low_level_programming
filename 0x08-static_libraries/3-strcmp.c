#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s2: paramater for string 2
 * @s1: paramater for string 1
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		if (s1[a] > s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
