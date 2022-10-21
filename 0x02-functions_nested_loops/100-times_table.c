#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: returns void
 */
void times_table(void)
{
	int c;
	int r;
	int prod;

	for (c = 0; c < 10; c++)
	{
		_putchar(48);

		for (r = 1; r <= 9; r++)
		{
			prod = c * r;

			_putchar(',');
			_putchar(' ');

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
