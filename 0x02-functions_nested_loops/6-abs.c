#include "holberton.h"

/**
  * _abs - computes the absolute value of an integer
  * @n: an int that takes a number from main
  *
  * Return: o or 1
  */

int _abs(int n)
{
	if (n >= 0)
	return (n);
	else
	{
		n *= -1;
		return (n);
	}
}
