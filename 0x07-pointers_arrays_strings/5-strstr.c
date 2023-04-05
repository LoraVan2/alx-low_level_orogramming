#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string where substring is found
 * @needle: the first occurance of the substring the function finds
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack !='\0'; haystack++)
	{

	char *a = haystack;
	char *b = needle;

	{
	while (*a == *b && *b != '\0')
	{
	a++;
	b++;
	}
	if (*b == '\0')
	return (haystack);
	}
	}
	return (NULL);

}
