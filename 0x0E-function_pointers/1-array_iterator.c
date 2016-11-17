#include "function_pointers.h"
/**
 * print_elem - prints an integer
 * @array: parameter for array
 * @size: parameter for size
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
