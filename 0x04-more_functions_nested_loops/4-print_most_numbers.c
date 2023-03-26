#include "main.h"

/**
 * prints_most_numbers - Prints most numbers from 0 to 9
 * prints numbers without 2 and 4
 * Return: The numbers from 0 to 9
 */

void print_most_numbers(void)

{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '9');
	}
	}
	_putchar('\n');

}
