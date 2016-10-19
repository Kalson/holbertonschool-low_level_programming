#include "holberton.h"

int main(void)
{
  char holberton[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
  char c;

  for (c = 0; c < sizeof(holberton); c++)
 {
   putchar(holberton[c]);
 }
putchar('\n');
return (0);
}
