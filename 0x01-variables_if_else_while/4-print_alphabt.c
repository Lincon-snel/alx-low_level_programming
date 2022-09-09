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
	char loww, q, e;

	loww = 'a';
	q = 'q';
	e = 'e';

	while (loww <= 'z')
	{
		if (loww != q && loww != e)
		{
			putchar(loww);
		}
	loww++;
	}
	putchar('\n');
	return (0);
}
