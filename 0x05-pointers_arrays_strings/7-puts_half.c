#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, j, k;

	len = strlen(str);
	j = len / 2;
	k = (len - 1) / 2;

	if (len % 2 == 0)
	{
		while (j < len)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else if (len % 2 != 0)
	{
		while (k < len)
		{
			_putchar(str[k]);
			k++;
		}
	}
	_putchar('\n');
}
