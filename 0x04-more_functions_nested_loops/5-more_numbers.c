#include "holberton.h"

/**
 * more_numbers - prints the numbers, from 0 to 14
 * 10 times
 *
 * Description: Uses headers to link function
 * Return: void
 */

void more_numbers(void)
{
	int i, a, b, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <=14; c++)
		{
			if (c < 10)
				b = c;
			else
			{
				a = c / 10;
				b = c % 10;
				_putchar(a + '0');
			}
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
