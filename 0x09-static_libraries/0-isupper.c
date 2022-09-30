#include "main.h"
/**
 * _isupper - To check for uppercase character
 * @c: character to be checked
 *
 * Description: To check if a character is in uppercase
 *
 * Return: 1 (if uppercase)
 * 0 (if otherwise)
 */
int _isupper(int c)
{
	char alph;

	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		if (alph == c)
		{
			return (1);
		}
	}
	return (0);
}
