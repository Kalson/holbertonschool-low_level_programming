#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 1)
		printf("%d\n", 0);
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (!(isdigit(atoi(argv[i]))))
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
