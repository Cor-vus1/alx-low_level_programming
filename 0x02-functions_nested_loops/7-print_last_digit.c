#include "main.h"
/**
 * print_last_digit - Prints the last digit.
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
*/
int print_last_digit(int n)
{
	int l = (n % 10);

	_putchar(l);

	return (l);
}
