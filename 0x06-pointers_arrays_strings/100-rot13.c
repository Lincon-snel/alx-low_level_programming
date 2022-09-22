#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @s: the string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		while ((s[k] >= 'a' && s[k] <= 'z') || (s[k] >= 'A' && s[k] <= 'Z'))
		{
			if ((s[k] >= 'a' && s[k] <= 'm') || (s[k] >= 'A' && s[k] <= 'M'))
			{
				s[k] = s[k] + 13;
			}
			else
			{
				s[k] = s[k] - 13;
			}
			k++;
		}
		k++;
	}
	return (s);
}
