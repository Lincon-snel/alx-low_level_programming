#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, k;

	len = strlen(s);
	for (k = 0; k < len / 2; k++)
	{
		char rev = s[k];

		s[k] = s[len - k - 1];
		s[len - k - 1] = rev;
	}
}
