#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: generates random valid passwords
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int sum;
	char p;

	srand(time(NULL));
	while (sum <= 2645)
	{
		p = rand() % 128;
		sum += p;
		putchar(p);
	}
	putchar(2772 - sum);
	return (0);
}
