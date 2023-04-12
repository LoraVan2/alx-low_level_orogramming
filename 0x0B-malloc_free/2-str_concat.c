#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: the two strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, m = 0, n = 0, p = 0;
	char *s;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[i])
	i++;

	while (s2[m])
	m++;

	p = i + m;
	s = malloc((sizeof(char) * p) + 1);

	if (s == NULL)
	return (NULL);

	m = 0;
	while (n < p)
	{
	if (n <= i)
	s[n] = s1[n];
	if (n >= i)
	{
	s[n] = s2[m];
	m++;
	}
	n++;
	}
	s[n] = '\0';
	return (s);

}
