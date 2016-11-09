#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: paramater for string 1
 * @s2: parameter for string 2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *my_array;

	c = 0;
	my_array = malloc(sizeof(*s1 + *s2));

	if (my_array == NULL)
		return (NULL);

	a = 0;
	while (s1[a] != '\0')
	{
		my_array[c] = s1[a];
		a++;
		c++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		my_array[c] = s2[b];
		b++;
		c++;
	}

	return (my_array);
	free(my_array);
}
