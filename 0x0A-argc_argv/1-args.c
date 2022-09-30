#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: program prints the number of arguments passed into it.
 *
 * Return: 0 (Success)
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
