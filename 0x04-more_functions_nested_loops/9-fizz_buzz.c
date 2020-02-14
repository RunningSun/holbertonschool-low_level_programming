#include "holberton.h"

/**
 * main - fizz buzz
 * multiples of three print Fizz,multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 * Description: Uses headers to link function
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0);
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
