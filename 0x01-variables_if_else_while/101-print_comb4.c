#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 999; i++)
	{
		if ((i % 10 > (i / 10) % 10) && ((i / 10) % 10 > (i / 100) % 10))
		{
			putchar ('0' + i / 100 % 10);
			putchar ('0' + i / 10 % 10);
			putchar ('0' + i % 10);
		if (i < 789)
			{
			putchar (',');
			putchar (' ');
			}
	}
	}
	putchar('\n');
	return (0);
}
