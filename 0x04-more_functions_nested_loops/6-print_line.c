#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: an integer passed by main function
 *
 * Description: Uses headers to link function
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
_putchar('\n');
}

