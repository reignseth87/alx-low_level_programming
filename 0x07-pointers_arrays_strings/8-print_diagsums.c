#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */


void print_diagsums(int *a, int size)
{
	int i;
	int principal = 0;
	int secondary = 0;

	for (i = 0; i < size; i++)
	{
		principal += a[(size + 1) * i];
		secondary += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", principal, secondary);

}
