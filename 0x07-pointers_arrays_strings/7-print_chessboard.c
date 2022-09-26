#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: the array
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int l, m;
	char n;

	for (l = 0; l < 8; l++)
	{
		for (m = 0; m < 8; m++)
		{
			n = a[l][m];
			_putchar(n);

			if (m == 7)
				_putchar('\n');
		}
	}
}
