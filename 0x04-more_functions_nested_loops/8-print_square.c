#include "main.h"

/**
 * print_square - print squares
 *
 * @size: parameter
 *
 */
void print_square(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 0; inc1 < size; inc1++)
		{
			for (inc2 = 0; inc2 < size; inc2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}

}
