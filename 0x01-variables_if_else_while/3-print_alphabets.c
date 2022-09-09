#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Using putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char loww = 'a';
	char upp = 'A';

	while (loww <= 'z')
	{
		putchar(loww);
		loww++;
	}

	while  (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');
	return (0);
}
