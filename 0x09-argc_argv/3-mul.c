#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			int first_n = atoi(argv[i])
			sum = first_n * atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
