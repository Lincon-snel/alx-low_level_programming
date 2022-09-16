#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints out the largest prime factor
 * of a number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long num, div, primeL;

	num = 612852475143;
	div = 2;

	while (num != 1)
	{
		if (num % div == 0)
		{
			num = num / div;
			primeL = div;
		}
		div += 1;
	}
	printf("%ld\n", primeL);
	return (0);
}
