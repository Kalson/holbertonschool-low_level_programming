#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  if (n > 5) 
 {
   printf("Last digit of %lu is %i and is greater than 5\n", n,n);
  }
  else if (n == 0)
    {
      printf("Last digit of %lu is %i is 0\n", n,n);
    }
  else if (n < 6 && != 0)
    {
      printf("Last digit of %lu is %i and is less than 6 and not 0\n", n);
    }
  return (0);
}
