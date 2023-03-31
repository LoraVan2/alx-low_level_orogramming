#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: str
 */

char *rot13(char *str)

{

	while (*str != '\0')
	{
	for ((*str >= 97 && *str <= 122) || (*str >= 65 && *str <= 90))
	{

	if (*str > 109 || (*str > 77 && *str < 91))
	{
	*str -= 13;
	else
	*str += 13;
	}
	}
	}
	str[i]++;

	return (str);
}
