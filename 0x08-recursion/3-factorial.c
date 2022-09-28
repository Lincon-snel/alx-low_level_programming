#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: the given number.
 *
 * Return: the factorial of the number,
 * -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}
