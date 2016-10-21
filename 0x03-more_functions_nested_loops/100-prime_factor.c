#include <stdio.h>
#include <math.h>
/**
 * main -  program that finds and prints the largest prime factor of a number
 * Return: Always 0.
 */

int main(void)
{
	long int num = 612852475143;
	int prime;

	for (prime = 2; prime <= sqrt(num); prime++)
	{
		/*int saved_prime;*/

		if (num % prime == 0)
		{
			/*saved_prime = prime;*/
			num = num / prime;
			prime = 1;
		/* printf("%ld\n", num);*/
		}
	}
	printf("%ld\n", num);
return (0);
}

