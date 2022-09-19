#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: the array
 * @n: the size of the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);

		if (k == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
