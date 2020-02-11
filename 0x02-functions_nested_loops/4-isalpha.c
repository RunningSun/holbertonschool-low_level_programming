#include "holberton.h"

/**
 * _isalpha - check for alphabet characters letter
 * @c: an int that is passed from the main file
 *
 * Description: Uses header to link to another function and letter check
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
