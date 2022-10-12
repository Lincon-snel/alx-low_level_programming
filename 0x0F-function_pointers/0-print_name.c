#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name to be printed.
 * @f: function pointer of the function that prints name.
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
