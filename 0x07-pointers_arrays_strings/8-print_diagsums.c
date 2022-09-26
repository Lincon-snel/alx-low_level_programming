#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: the matrix of integers
 * @size: the size of the matrix
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int k;
	int diag1 = 0;
	int diag2 = 0;
	int end = size * size;

	for (k = 0; k < end; k += size + 1)
	{
		diag1 += a[k];
	}

	for (k = size - 1; k < (end  - 1); k += size - 1)
	{
		diag2 += a[k];
	}
	printf("%d, %d\n", diag1, diag2);
}
