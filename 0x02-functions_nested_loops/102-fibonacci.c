#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: To print fibonacci numbers
 *
 * Return: Always 0 (Success);
 */
int main(void)
{
	int k;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;
	printf("%ld, %ld, ", fib[0], fib[1]);

	for (k = 2; k < 50; k++)
	{
		fib[k] = fib[k - 1] + fib[k - 2];
		if (k == 49)
			printf("%ld\n", fib[k]);
		else
			printf("%ld, ", fib[k]);
	}
	return (0);
}
