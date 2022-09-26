#include "main.h"
#include <string.h>
/**
 * *_strstr - finds the first occurrence of a substring in a main string
 * @haystack: the main string to be scanned
 * @needle: the substring to be matched
 *
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);

	return (result);
}
