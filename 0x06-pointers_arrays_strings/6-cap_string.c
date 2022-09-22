#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 *
 * Return: pointer to the new string
 */
char *cap_string(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (k == 0 ||
		     str[k - 1] == ' ' ||
		     str[k - 1] == '\t' ||
		     str[k - 1] == '\n' ||
		     str[k - 1] == ',' ||
		     str[k - 1] == ';' ||
		     str[k - 1] == '.' ||
		     str[k - 1] == '!' ||
		     str[k - 1] == '?' ||
		     str[k - 1] == '"' ||
		     str[k - 1] == '(' ||
		     str[k - 1] == ')' ||
		     str[k - 1] == '{' ||
		     str[k - 1] == '}')
		{
			if (str[k] >= 'a' && str[k] <= 'z')
				str[k] = str[k] - 32;
		}
	}
	return (str);
}
