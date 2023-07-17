#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the size of various types.
 * Return: 0
 */

int main(void)
{
	printf("Size of char: %d Byte(s)\n", sizeof(char));
	printf("Size of int: %d Byte(s)\n", sizeof(int));
	printf("Size of long: %d Byte(s)\n", sizeof(long));
	printf("Size of long long int: %d Byte(s)\n", sizeof(long long int));
	printf("Size of float: %d Byte(s)\n", sizeof(float));

	return (0);
}
