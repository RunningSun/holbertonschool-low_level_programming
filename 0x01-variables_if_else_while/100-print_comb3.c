#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		if ((i / 10) < (i % 10))
			{
			putchar ('0' + i / 10);
			putchar ('0' + i % 10);
		if (i < 89)
			{
			putchar (',');
			putchar (' ');
			}
			}
	}
	putchar('\n');
	return (0);
}
