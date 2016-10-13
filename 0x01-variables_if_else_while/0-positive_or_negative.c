#include <stdlib.h>
#include <time.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  if ( n > 0 )
    puts("%ld is positive",n)
      if ( n == 0 )
	puts("%ld is zero",n)
	  if ( n < 0 )
	    puts("%ld is negative",n) 
  return (0);
}
