#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int len, k;

	len = strlen(str);
	for (k = 0; k < len; k++)
	{
		if (k % 2 == 0)
			_putchar(str[k]);
	}
	_putchar('\n');
}
