#include "holberton.h"

/**
  * jack_bauer - prints minute of Jack Bauer, 00:00 to 23:59
  *
  * Description: Use headers to link to another function and checks
  * Return: 0 when done
  */

void jack_bauer(void)
{
	int x, y, hr1, hr2, min1, min2;

	for (x = 0; x <= 23; x++)
	{
		hr1 = x / 10 + '0';
		hr2 = x % 10 + '0';
		for (y = 0; y <= 59; y++)
		{
			min1 = y / 10 + '0';
			min2 = y % 10 + '0';
			_putchar(hr1);
			_putchar(hr2);
			_putchar(':');
			_putchar(min1);
			_putchar(min2);
			_putchar('\n');
		}
	}
}
