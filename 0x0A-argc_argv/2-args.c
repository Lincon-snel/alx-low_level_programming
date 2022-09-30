#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: Program prints all argument; each followed by a new line.
 *
 * Return: 0 (sucess)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
