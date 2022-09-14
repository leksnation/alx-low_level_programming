#include "main.h"

/**
 * print_sign-prints sign of a number
 *
 * @n: character to be checked
 *
 * Return: return 0, 1 or -1
 *
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_purchat('+');
		return (0);
	}
	else
	{
		_putchar('-');

		return ('-1');
	}
}
