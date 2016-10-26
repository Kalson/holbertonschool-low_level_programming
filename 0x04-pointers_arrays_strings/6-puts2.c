#include "holberton.h"
/**
 * puts2 - func that prints 1 char/2 of a string, followed by a new line.
 * @str: declaration of str and paramters for the function puts2
 * Return: Always 0.
 */
void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			_putchar(l);
		}
	}
	_putchar('\n');
}
