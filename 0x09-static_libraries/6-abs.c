#include "main.h"
/**
 * _abs - computes absolute value of a number
 * @r: the number to be computed
 *
 * Description: To convert all numbers to their absolute value
 *
 * Return: Absolute value of the number
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
