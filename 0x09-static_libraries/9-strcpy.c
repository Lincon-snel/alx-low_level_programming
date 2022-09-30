#include "main.h"
/**
 * *_strcpy - copies a string
 * @dest: the new string created
 * @src: the old string
 *
 * Return: the pointer to string dest
 */
char *_strcpy(char *dest, char *src)
{
	char *pS, *pD;

	pS = src;
	pD = dest;

	while (*pS != '\0')
	{
		*pD = *pS;
		pS++;
		pD++;
	}
	*pD = '\0';

	return (dest);
}
