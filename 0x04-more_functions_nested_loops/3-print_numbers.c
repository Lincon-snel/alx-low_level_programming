#include "main.h"
/**
 * print_numbers - prints number from 0 - 9
 *
 * Return: Void
 */
void print_numbers(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
