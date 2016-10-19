#include "holberton.h"
/**
 * print_alphabet_x10 - function to check for lowercase character
 *
 * Return: 0
 */
int _islower(int c)
{
  if (c >= 'a' && c <= 'z')
    {
      return (1);
    }
  else if (c >= 'A' && c <= 'Z') 
    {
  return (0);
    }
return (0);
}
