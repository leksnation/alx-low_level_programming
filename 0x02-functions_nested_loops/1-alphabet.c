#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description - Print alphabet in lowercase
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
