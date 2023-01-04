#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: the value to multiply
 * @y: the times to multiply the value
 * Return: the value multiplied y times
 */
int _pow_recurshion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return(1);

	return (x * _pow_recurshion(x, y -1));
}
