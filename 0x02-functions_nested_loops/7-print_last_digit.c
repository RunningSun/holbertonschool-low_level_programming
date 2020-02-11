#include "holberton.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: an int that takes a number from main
  *
  * Return: 0 or 1
  */

int print_last_digit(int n)
{
	int i = n % 10;

	if (n > 0)
	{
		_putchar(i + '0');
		return (i);
	}
	else if (n < 0)
	{
		_putchar(-i + '0');
		return (-i);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
