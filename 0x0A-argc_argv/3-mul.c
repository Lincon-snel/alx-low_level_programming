#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: program multiplies two numbers
 *
 * Return: 0 (success) if argc == 3,
 * 1 if otherwise.
 */
int main(int argc, char *argv[])
{
	int k, j, mult;

	k = atoi(argv[1]);
	j = atoi(argv[2]);
	mult = k * j;

	if (argc == 3)
	{
		printf("%d\n", mult);
	}
	else if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
