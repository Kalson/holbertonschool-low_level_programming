#include "holberton.h"
/**
 *  _strlen_recursion - find length of string, recursively
 * @s: pointer to beginning of string
 * Return: int representing string length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
/**
 * pal_check - recursively checks for palindrome
 * @a: for the start of string
 * @length: length of string
 * Return: 1 if pal, 0 otherwise
 */
int pal_check(char *a, int length)
{
	if (length <= 1)
		return (1);
	else if (a[0] != a[length - 1])
		return (0);
	else
		return (pal_check((a + 1), (length - 2)));
}
/**
 * is_palindrome - recursively checks for palindrome
 * @s: pointer to beginning of string, potential palindrome
 * Return: 1 if pal, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (pal_check(s, len));
}
