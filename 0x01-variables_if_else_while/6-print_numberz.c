#include <stdio.h>
/**
 * main – Entry point
 *
 * Description: Using putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k = '0';

	for (k = '0'; k <= '9' ; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
