#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, l, m;

	for (k = '0'; k < '8'; k++)
	{
		for (l = k + 1; l < '9'; l++)
		{
			for (m = l + 1; m <= '9'; m++)
			{
				if ((k != l) != m)
				{
					putchar(k);
					putchar(l);
					putchar(m);
					if (k == '7' && m == '9')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
