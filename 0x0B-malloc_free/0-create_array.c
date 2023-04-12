#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates array of chars
 * initializes it with specific char
 * @size: input
 * @c: input
 * Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;


	n = malloc(size * sizeof(n));
	if (n == 0)
	{
	return (NULL);
	}
	i = 0;
	while (i < size)
	{
	n[i] = c;
	i++;
	}
	n[i] = '\0';
	return (n);

}

