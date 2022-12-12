#include "main.h"
/**
 * _islower - To check for lowercase character
 * @c: character to be checked
 *
 * Description: To check if a character is in lowercase
 *
 * Return: 1 (if lowercase)
 * 0 (if otherwise)
 */
int _islower(int c)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == c)
		{
			return (1);
		}
	}
	return (0);
}
