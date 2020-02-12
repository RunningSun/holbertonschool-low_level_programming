#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: Uses header to link to another function
 * Retrun: void
 */

void times_table(void)
{
	int rows;
	int colums;
	int ones = 0;
	int tens = 0;
	int num = 0;
	int multi = 0;

	for (colums = 0; colums < 10; colums++)
	{
		for (rows = 0; rows < 10; rows++)
		{
			num = rows * multi;
			ones = num % 10;
			tens = num / 10;
			if (tens != 0)
			_putchar(tens + '0');
			_putchar(ones + '0');
			if (rows != 9 && ((rows + 1) * multi) <= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			else if (rows != 9 && ((rows + 1) * multi) >= 9)
			{
			_putchar(',');
			_putchar(' ');
			}
	}
	_putchar('\n');
	multi++;
	rows = 0;
	}
}
