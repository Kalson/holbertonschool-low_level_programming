#include "holberton.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: points to char array or string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	unsigned int index = 0;

	if (s[index] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[index]);
	_puts_recursion(s + 1);
}
