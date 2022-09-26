#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a char
 * @to: the char
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
	s = &to;
}
