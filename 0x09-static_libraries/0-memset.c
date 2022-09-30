#include "main.h"
#include <string.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area that is to be set
 * @b: the value to be set
 * @n: number of bytes to be set
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
