#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
