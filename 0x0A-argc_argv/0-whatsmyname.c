#include "main.h"
#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: contains the number of arguments passed to the program.
 * @argv: strings of arguments passed to the program.
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s ", argv[i]);
	}
	printf("\n");
	return (0);

}
