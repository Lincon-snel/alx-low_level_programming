#include "main.h"
/**
 * _isalpha - Checks for an alphabetic character
 * @c: The character to be checked
 *
 * Description: To check if a character is an alphabet
 *
 * Return: 1 (if character is an alphabet)
 * 0 (if otherwise)
 */
int _isalpha(int c)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == c)
			return (1);
	}

	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		if (alph == c)
			return (1);
	}
	return (0);
}
