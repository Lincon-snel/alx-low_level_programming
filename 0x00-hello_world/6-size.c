#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: To print the sizes of various data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long long int: %llu byte(s)\n", sizeof(int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
