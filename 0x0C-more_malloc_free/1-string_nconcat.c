#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings (s1 and n bytes of s2)
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate with s1
 *
 * Return: pointer to the new string,
 *         or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i, j = 0;
	unsigned int k, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[j++] = s1[i];

	if (n >= len2)
	{
		for (i = 0; s2[i]; i++)
			s3[j++] = s2[i];
	}
	else
	{
		for (k = 0; k <= (n - 1); k++)
			s3[j++] = s2[k];
	}

	s3[j] = '\0';

	return (s3);
}
