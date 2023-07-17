#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the size of various types.
 * Return: 0
 */

int main(void)
{
	printf("Size of char: %d Byte\n", sizeof(char));
	printf("Size of int: %d Byte\n", sizeof(int));
	printf("Size of long: %d Byte\n", sizeof(long));
	printf("Size of long long int: %d Byte\n", sizeof(double));
	printf("Size of float: %d Byte\n", sizeof(float));

	return (0);
}
