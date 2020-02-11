#include "holberton.h"

/**
  * print_alphabet - prints out the alphabet with a new line
  * Description: Uses headers to link to another function
  * Return: 0 when well done
  */

void print_alphabet(void)
{
	char c;
	for (c='a'; c<='z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
