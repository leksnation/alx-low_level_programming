#include "main.h"

/**
 * _isdigit - function that checks for digit
 *
 * @c: character to be checked
 *
 * Return:1 if it is uppercase or 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
