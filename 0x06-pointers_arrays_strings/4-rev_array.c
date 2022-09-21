#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: the array to be reversed
 * @n: the number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int k;

	for (k = 0; k < n / 2; k++)
	{
		int rev = a[k];

		a[k] = a[n - 1 - k];
		a[n - 1 - k] = rev;
	}
}
