#include "main.h"
/**
 * _isalpha - Shows 1 if input is a
 * alpha charachter. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for alpha charachters. 0 for the rest.
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
