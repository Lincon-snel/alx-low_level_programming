#include "main.h"
#include <string.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);

	return (result);
}
