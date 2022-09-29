#include "main.h"
int check_prime(int num, int k);

/**
 * check_prime - determines if a number is prime or not
 * @num: the number
 * @k: possible divisor
 *
 * Return: 1 if number is prime,
 * 0 if otherwise.
 */
int check_prime(int num, int k)
{
	int l;

	l = num % k;

	if (l == 0)
		return (0);
	else if (k > (num / 2))
		return (1);
	else
		return (check_prime(num, k + 1));
}


/**
 * is_prime_number - finds if an integer is a prime or not
 * @n: the integer
 *
 * Return: 1 if integer is a prime,
 * 0 if otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else
		return (check_prime(n, 2));
}
