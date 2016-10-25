#include "holberton.h"
/**
 * print_rev - function that prints a string, followed by a new line
 * @s: declaration of s and paramters for the function
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int c;

	for (c = '\0'; s[c] != 0; c++)
	{
	}
	for (c = c; s[c] >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');

}
