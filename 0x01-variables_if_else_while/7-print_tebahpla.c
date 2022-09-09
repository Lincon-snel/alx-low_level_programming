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
	char low = 'z';

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
