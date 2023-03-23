#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n: The character to be checked
 *Return: 1 and print + when greater than zero
 * 0 when zero or -1 and print - when less than zero
 */

int print_sign(int n) {

	if (n > 0)
	{

	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else

		(n = 0);
	{
	_putchar('0');
	return (0);
	}


}
