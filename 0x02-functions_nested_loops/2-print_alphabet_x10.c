#include "main.h"
/**
 * print_alphabet_x10 - To print letters 10 times
 *
 * Description: Print letters in lowercase ten times,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char alph;

	i = 0;
	while (i <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
	_putchar('\n');
	i++;
	}
}
