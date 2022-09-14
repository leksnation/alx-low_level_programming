#include "main.h"

/**
 * _islower - Function or Entry point
 *
 * Description - Function that checks for lowercase character
 * Return 1 if c is lowercase or 0 if otherwise
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z') 
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
