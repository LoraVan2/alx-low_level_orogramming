#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the previous allocated memory
 * @old_size: the size in bytes of allocated space
 * @new_size: size in bytes of new memory
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *np;
	unsigned int i;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	{
	np = malloc(new_size);
	if (np == NULL)
	return (np);
	}
	else
	{
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	}
	np = malloc(new_size);
	if (np == NULL)
	return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
	np[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (np);

}
