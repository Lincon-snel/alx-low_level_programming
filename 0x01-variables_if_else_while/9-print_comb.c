#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: All possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);

		if (k != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
