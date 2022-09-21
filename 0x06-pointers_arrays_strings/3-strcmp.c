#include "main.h"
#include <string.h>
/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 (if the strings are equal)
 * >0 (if the first non-matching characters in s1 is greater than that of s2)
 * <0 (if the first non-matching characters in s1 is lesser than that of s2)
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
