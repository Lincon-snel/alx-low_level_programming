#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates strings
 * @dest: the string to be appended
 * @src: the source of characters that will be appended
 * @n: number of characters to be appended
 *
 * Return: pointer to the appended string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
