#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Concatenates two strings
 * @dest: The first string to concatenate with
 * @src: The second string to concatenate with dest
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int destlen = 0, i;

	while (dest[destlen])
	{
	destlen++;
	}
	
       for (i = 0; src[i] != 0; i++)
	{
	dest[destlen] = src[i];
	dest++;
	
	}

	dest[destlen] = '\0';
	return (dest);

}
