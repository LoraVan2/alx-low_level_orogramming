#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of chars
 * initializes it with specific char
 * @size: size of array 
 * @c: char to fill the array with
 * Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	if (size == 0)
	return (NULL);

	n = malloc(size * sizeof(char));
	if (n == 0)
	{
	return (NULL);
	}
	i = 0;
	while (i < size)
	{
	i++;
	n[i] = c;
	}
	return (n);

}

