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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		k = atoi(argv[1]);
		j = atoi(argv[2]);
		mult = k * j;

		printf("%d\n", mult);
		return (0);
	}
}
