#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description - program prints its name, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	printf("%s\n", argv[0]);

	return (0);
}
