#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Printing out hexadecimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char hex;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
