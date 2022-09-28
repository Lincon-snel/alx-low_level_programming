#include "main.h"
int check_square(int num, float x);

/**
 * check_square - determines the square root of an integer
 * @num: the integer
 * @x: the square root
 *
 * Return: the square root or
 * -1 if square root is not found.
 */
int check_square(int num, float x)
{
	float root;

	root = num / x;

	if (root == x)
		return (x);
	else if (x > (num / 2))
		return (-1);
	else
		return (check_square(num, x + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number;
 * @n: the number
 *
 * Return: the square root or
 * -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (check_square(n, 1));
}
