#include "main.h"
#include <string.h>
/**
 * print_rev - prints strings in rev
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len, k;

	len = strlen(s);

	for (k = len - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
