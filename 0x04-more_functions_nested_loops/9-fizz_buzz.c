#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The FizzBuzz test
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if ((k % 3 == 0) && (k % 5 == 0))
			printf("FizzBuzz ");
		else if (k % 3 == 0)
			printf("Fizz ");
		else if (k % 5 == 0)
			printf("Buzz ");
		else if (k == 100)
			printf("%d", k);
		else
			printf("%d ", k);
	}
	printf("\n");
	return (0);
}
