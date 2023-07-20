#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c:digit to be checked
 *
 * Return: 1 if between 0 - 9, 0 if not.
 */

int _isdigit(int c)
{
	if (c <= 48 && c > 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
