#include <stdio.h>

/**
 * swap_int - swap two integers
 * @a: a pointer, the integer we want to swap
 * @b: a pointer, the integer we want to swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

}
