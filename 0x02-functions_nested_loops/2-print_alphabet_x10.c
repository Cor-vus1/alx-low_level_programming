#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description - prints 10 times the alphabet.
 * return: 0
*/

void print_alphabet_x10(void)
{
	char x;
	char y;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
}
