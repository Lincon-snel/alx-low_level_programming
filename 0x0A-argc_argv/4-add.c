#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: Program adds positive numbers
 *
 * Return: 1 if one of the number contains symbols that are not digits,
 * 0 if otherwise.
 */
int main(int argc, char *argv[])
{
	int k, j, sum, num, len;
	char *p;

	if (argc <= 1)
		printf("0\n");
	else
	{
		sum = 0;

		for (k = 1; k < argc; k++)
		{
			p = argv[k];
			len = strlen(p);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(p + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[k]);
			sum += num;
		}
		printf("%d\n", sum);
	}

	return (0);
}
