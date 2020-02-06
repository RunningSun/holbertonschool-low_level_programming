#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	char n;
	char c;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

