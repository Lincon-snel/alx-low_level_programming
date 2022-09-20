#include "main.h"
/**
 * _atoi - converts strings to integers
 * @s: the string
 *
 * Return: integers
 * 0 (if there is no integer)
 */
int _atoi(char *s)
{
	int ve = 1;
	int numb = 0;

	do {
		if (*s == '-')
		{
			ve *= -1;
		}

		else if (*s >= '0' && *s <= '9')
		{
			numb = (numb * 10) + (*s - '0');
		}
		else if (numb > 0)
			break;
	} while (*s++);

	return (numb * ve);
}
