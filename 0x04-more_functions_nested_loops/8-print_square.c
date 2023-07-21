#include "main.h"
/**
 * print_square - prints a square
 *
 * @size: size of the square
 *
 * Return: always 0
 */
void print_square(int size)
{
	int size = 10;
	int vertical;
	int horizontal;
	int sum = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (vertical = 1; vertical <= size; vertical++)
		{
			for (horizontal = 0; horizontal <= size; horizontal++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
