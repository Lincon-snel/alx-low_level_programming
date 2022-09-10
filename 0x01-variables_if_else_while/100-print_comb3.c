#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	int l;

	for (k = '0'; k < '9'; k++)
	{
		for (l = k + 1; l <= '9'; l++)
		{
			if (k != l)
			{
				putchar(k);
				putchar(l);

				if (k == '8' && l == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
