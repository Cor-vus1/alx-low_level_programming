#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints the numbers from 1 to 100
 * But for multiples of three print Fizz
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz.
 *
 * Return: always0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		int three = (num % 3);
		int five = (num % 5);

		if (three == 0 && five == 0)
		{
			printf("FizzBuzz ");
		}
		else if (three == 0)
		{
			printf("Fizz ");
		}
		else if (five == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
}
