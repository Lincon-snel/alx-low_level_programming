#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int convert(int cent);

/**
 * convert - converts cent to certain number of coins for change.
 * @cent: the amount of cent to be converted
 *
 * Return: number of coins needed for the change.
 */
int convert(int cent)
{
	int coins = 0;

	while (cent != 0)
	{
		if (cent % 10 == 9 || cent % 10 == 7)
			cent -= 2;
		else if (cent % 25 == 0)
			cent -= 25;
		else if (cent % 10 == 0)
			cent -= 10;
		else if (cent % 5 == 0)
			cent -= 5;
			else if (cent % 2 == 0)
		{
			if (cent % 10 == 6)
				cent -= 1;
			else
				cent -= 2;
		}
		else
			cent -= 1;

		coins++;
	}

	return (coins);
}


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * Return: 0 if argc equals 2,
 * 1 if otherwise.
 */
int main(int argc, char *argv[])
{
	int cent;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
		printf("0\n");
	else
		printf("%d\n", convert(cent));

	return (0);
}
