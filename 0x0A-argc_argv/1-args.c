#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of argument passed into it
 * @argc: arguement count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);

}
