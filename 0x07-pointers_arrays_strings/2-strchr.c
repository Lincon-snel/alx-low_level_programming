#include "main.h"
#include <string.h>
/**
 * *_strchr - locates a character in a string
 * @s : pointer to the string to be scanned
 * @c: the character to be searched for
 *
 * Return: pointer to the first occurrence of the character c
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *result;

	result = strchr(s, c);

	return (result);
}
