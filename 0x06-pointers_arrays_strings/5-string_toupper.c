#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string
 *
 * Return: pointer to the new string
 */
char *string_toupper(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
			str[k] = str[k] - 32;
		k++;
	}
	return (str);
}
