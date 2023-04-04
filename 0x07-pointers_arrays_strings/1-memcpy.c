#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: the byte to copy 
 * @src: the memory area to copy from
 * @dest: the destination to copy to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];

	return (dest);

}
