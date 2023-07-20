#include "main.h"

/**
 * _isupper - Check for uppercase charachters.
 *
 * @c: input for alphabet
 *
 * Return: 1 if upper case 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
