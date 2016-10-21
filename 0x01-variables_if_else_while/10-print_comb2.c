#include <stdio.h>
/**
 * main - program that prints numbers from 0 to 99.
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c <= 99)
	{
		putchar(c / 10 + '0');
		putchar(c % 10 + '0');
		if (c != 99)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
putchar('\n');
return (0);
}
