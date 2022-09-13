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
	if (r % 10 < 0)
	{
		_putchar((-1 * r % 10) + '0');
		return (-1 * r % 10);
	}
	else if (r % 10 == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar((r % 10) + '0');
		return (r % 10);
	}
}
