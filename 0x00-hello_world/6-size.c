#include <stdio.h>

/**
 * main - Prints the size of various types a based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(void)
{


	printf("Size of a char:  %zu byte(s)\n", sizeof(char));

	printf("Size of an Int:  %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(long double));
	return (0);


}

