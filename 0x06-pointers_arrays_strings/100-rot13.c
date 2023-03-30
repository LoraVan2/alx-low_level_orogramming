#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: str
 */

char *rot13(char *str)

{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
	;char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

	for  (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{

	if (str[i] == datarot[j])
	{
	str[i] = data1[j];
	break;
	}
	}
	}
	return (str);
}
