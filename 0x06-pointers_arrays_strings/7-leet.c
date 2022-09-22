#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: the string to be encoded
 *
 * Return: the pointer to the string
 */
char *leet(char *s)
{
	int k, j;
	char letter[9] = {'o', 'l', '#', 'e', 'a', '#', '#', 't'};

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[k] == letter[j] || s[k] == letter[j] - 32)
				s[k] = j + '0';
		}
	}
	return (s);
}
