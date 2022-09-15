#include "main.h"

/**
 * _abs - Print the absolute value of an integer - Entry point
 *
 * @i: number to be checked
 *
 * Return: Always 0 (Success)
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (0);
	}
}
