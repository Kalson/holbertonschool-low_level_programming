#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1:stirng 1
 * @s2:string 2
 * @n: n bytesofstring 2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *ptr, *empt;
  unsigned int i, k;

  empt = "";
  if (s1 == NULL)
    s1 = empt;
  if (s2 == NULL)
    s2 = empt;
  for (i = 0; s1[i] != '\0'; i++)
    ;
  ptr = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*ptr)));
  if (ptr == NULL)
    return (NULL);
  for (i = 0; s1[i] != '\0'; i++)
    ptr[i] = s1[i];
  for (k = 0; s2[k] != '\0' && k < n; k++, i++)
    ptr[i] = s2[k];
  ptr[i] = '\0';
  return (ptr);
}
