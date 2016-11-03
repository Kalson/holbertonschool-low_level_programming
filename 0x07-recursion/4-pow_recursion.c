#include "holberton.h"
#include <math.h>
/**
 * _pow_recursion - func that returns the value of x raised to the power of y
 * @x: paramater for the number
 * @y: number to be raised to
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
