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
	int coin = 0;

	if (cent % 25 >= 0)
	{
		coin += cent / 25;
		cent = cent % 25;
	}
	if (cent % 10 >= 0)
	{
		coin += cent / 10;
		cent = cent % 10;
	}
	if (cent % 5 >= 0)
	{
		coin += cent / 5;
		cent = cent % 5;
	}
	if (cent % 2 >= 0)
	{
		coin += cent / 2;
		cent = cent % 2;
	}
	if (cent % 1 >= 0)
		coin += cent;

	return (coin);
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
	int cent, change;

	if (argc == 2)
	{
		cent = atoi(argv[1]);

		if (cent < 0)
		{
			printf("0\n");
		}
		else
		{
			change = convert(cent);
			printf("%d\n", change);
		}

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
