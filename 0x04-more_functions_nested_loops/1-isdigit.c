#include "main.h"

/**
 * _isdigit - check whether a character is a digit or not
 * @c: character to be checked
 *
 * Description: Check if c is a digit from
 * 0-9 or not.
 *
 * Return: 1 if it's a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
