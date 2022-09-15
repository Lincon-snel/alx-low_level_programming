#include "main.h"
/**
 * print_most_numbers - prints from 0 - 9, except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		if (k == '2' || k == '4')
			continue;
		_putchar(k);
	}
	_putchar('\n');
}
