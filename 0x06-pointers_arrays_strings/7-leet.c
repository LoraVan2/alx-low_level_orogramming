#include "main.h"
#include  <stdio.h>

/**
 * leet - Encodes a string into 1337
 * @str: string to encode
 * Return: str
 */

char *leet(char *str)

{
	char a[]  = "aAeEoOtTlL";
	char n[]  = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 5; j++)
	{
	if (str[i] == a[j])
	{
	(str[i] = n[j]);
	}
	}
	}
	return (str);

}
