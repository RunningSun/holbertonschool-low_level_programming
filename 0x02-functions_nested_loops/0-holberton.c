#include "holberton.h"

/**
 * main - function
 * Desrciption: Print Holberton with _putchar
 *
 * Return: 0
 */

int main(void)
	{
		int i = 0;
		char s[] = "Holberton\n";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
	}
