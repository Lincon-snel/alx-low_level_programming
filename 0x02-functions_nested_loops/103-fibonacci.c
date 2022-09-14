#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	long int fib[50], sum = 2;

	fib[0] = 1;
	fib[1] = 2;

	for (k = 2; k < 50; k++)
	{
		fib[k] = fib[k - 1] + fib[k - 2];
		if ((fib[k] % 2) == 0 && fib[k] < 4000000)
			sum += fib[k];
	}
	printf("%ld\n", sum);
	return (0);
}
