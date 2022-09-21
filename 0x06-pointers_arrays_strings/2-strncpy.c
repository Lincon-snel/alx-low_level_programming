#include "main.h"
#include <string.h>
/**
 * *_strncpy - copies a string
 * @dest: the destination string of the copy
 * @src: the string to be copied from
 * @n: number of characters to be copied
 *
 * Return: pointer to the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
