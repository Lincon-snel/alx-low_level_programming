#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring that matches a main string
 * @s: pointer to the main string to be scanned
 * @accept: string containing characters to match that of string s
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int result;

	result = strspn(s, accept);

	return (result);
}
