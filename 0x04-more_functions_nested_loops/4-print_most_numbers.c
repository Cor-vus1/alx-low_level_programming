#include "main.h"
/**
 * print_most_numbers - function that prints the numbers,
 * from 0 to 9 without 2 and 4.
 *
 * Return: 0 always
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}

