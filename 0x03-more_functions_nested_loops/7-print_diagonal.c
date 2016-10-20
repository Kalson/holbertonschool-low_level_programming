#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the int for the paramaters of my function
 * Return: 0
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			while (b <= a)
			{
				_putchar('a');
				b++;
			}
			_putchar('\n');
			a++;
			b = 0;
		}
	}
	else
		_putchar('\n');
}
