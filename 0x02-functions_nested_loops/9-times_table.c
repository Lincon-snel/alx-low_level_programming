#include "main.h"
/**
 * times_table - prints 9-times table
 *
 * Description: To print 9-times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int m, n, p;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			p = m * n;

			if ((p / 10) == 0)
			{
				if (n != 0)
					_putchar(' ');
				_putchar(p + '0');

				if (n == 9)
					continue;
				_putchar(';');
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');

				if (n == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
