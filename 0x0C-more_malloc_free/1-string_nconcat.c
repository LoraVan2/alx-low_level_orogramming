#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: new allocated memory consist of
 * @s2: contains bytes
 * @n: number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m = 0, r = 0, o = 0, p = 0;
	char *str;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[m])
	m++;
	while (s2[o])
	o++;
	if (r >= o)
	p = m + o;
	else
	p = m + n;
	str = malloc(sizeof(char) * p + 1);
	if (str == NULL)
	return (NULL);

	o = 0;
	while (r < p)
	{
	if (r <= m)
	str[r] = s1[r];

	if (r >= m)
	{
	str[r] = s2[o];
	o++;
	}
	r++;
	}
	str[r] = '\0';
	return (str);

}
