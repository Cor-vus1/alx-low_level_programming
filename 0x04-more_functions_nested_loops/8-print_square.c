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
	int vertical;
	int horizontal;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (vertical = 1; vertical <= size; vertical++)
		{
			for (horizontal = 1; horizontal <= size; horizontal++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
