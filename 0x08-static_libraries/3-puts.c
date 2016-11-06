#include "holberton.h"
/**
 * _puts - function that prints a string, followed by a new line
 * @s: declaration of *str and paramters for the function _puts
 * Return: Always 0.
 */
void _puts(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
