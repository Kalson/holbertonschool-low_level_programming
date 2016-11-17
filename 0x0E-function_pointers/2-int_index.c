#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer
 * @array: the array to check
 * @size: parameter for size
 * @cmp: paratmeter for cmp
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
