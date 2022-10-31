#include "main.h"

/**
 * _abs - print the absolute value of a number
 * @num: the number to be checked
 *
 * Description: This fucnction prints the absolute value of
 * a given argument passed
 *
 * Return: the absolute value of num, else -value
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}