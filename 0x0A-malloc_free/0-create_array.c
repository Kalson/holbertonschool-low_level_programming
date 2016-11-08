#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

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
