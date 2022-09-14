#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @r: the number to be checked
 *
 * Description: To print out the last digit of a number
 *
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	int k;

	if (r < 0)
		k = -1 * (r % 10);
	else
		k = r % 10;

	_putchar((k % 10) + '0');
	return (k % 10);
}
