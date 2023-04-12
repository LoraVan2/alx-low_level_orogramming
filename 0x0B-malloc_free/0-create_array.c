#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of chars
 * initializes it with specific char
 * @size: size of array 
 * @c: char to fill the array with
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n;

	if (size == 0)
	return (NULL);

	n = malloc(size * sizeof(char));
	if (n == NULL)

	return (NULL);

	for (i = 0; i < size; i++)
	{
	n[i] = c;
	}
	return (n);

}

