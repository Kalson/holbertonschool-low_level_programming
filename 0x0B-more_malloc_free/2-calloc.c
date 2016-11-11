#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *_calloc - allocate memory for an array usingmalloc
 * @nmemb: number ofelements
 * @size: size of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *ptr;

  if (nmemb == 0 || size == 0)
    return (NULL);
  ptr = malloc(nmemb * size);
  if (ptr == NULL)
    return (NULL);
  _memset(ptr, 0, (nmemb * size));
  return (ptr);
}

/**
 *_memset - sets first n bytes of the memory area
 * @s: array to set
 * @b: what to set it to
 * @n: first n bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n; i++)
    {
      s[i] = b;
    }
  return (s);
}
