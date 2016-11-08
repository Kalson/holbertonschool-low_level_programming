#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - check the code for Holberton School students.
 * @size: argument for size of the array
 * @c: argument for char
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i = 0;

	my_array = malloc(size * sizeof(c));

	while (i < size)
	{
		if (my_array == NULL)
		{
			return (NULL);
		}
		my_array[i] = c;
		i++;
	}
	return (my_array);
}
