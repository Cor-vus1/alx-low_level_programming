#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - print n to 98 coints
 * separated by comm, followed by space
 * and number should be printed in order
 *
 * @n: input
 */
void print_to_98(int n)
{
	int c;

	if (n > 98)
	{
		for (c = n; c > 98; c--)
		{
			printf("%d, ", c);
		}
	}
	else
	{
		for (c = n; c < 98; c++)
		{
			printf("%d, ", c);
		}
	}
	printf("98\n");
}
