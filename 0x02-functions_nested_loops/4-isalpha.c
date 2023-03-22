#include "main.h"

/**
 * _isalpha - Checks for alphabetic numbers
 * @c - The character to be checked
 * Return: if there is a letter, lower or uppercase, or 0 if anything else
 */

int _isalpha(int c)

{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);

}
