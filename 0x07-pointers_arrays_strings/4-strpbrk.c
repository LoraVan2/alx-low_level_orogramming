#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the first occurance in string to locate
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)

{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (k = 0; accept[k] != '\0'; k++)
	{
	if (s[i] == accept[k])
	return (s + i);
	}
	}
	return (NULL);

}
