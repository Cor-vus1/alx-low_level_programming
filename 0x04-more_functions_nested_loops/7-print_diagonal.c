#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character \ should be printed
 *
 * Return: 0 always
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				if (y != 1)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
