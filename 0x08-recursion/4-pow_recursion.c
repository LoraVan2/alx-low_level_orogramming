#include "main.h"

/**
 * _pow_recursion -returns a value to the power of another value
 * @x: the value to return
 * @y: the power to which x is raised to
 * Return: 0
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));

}
