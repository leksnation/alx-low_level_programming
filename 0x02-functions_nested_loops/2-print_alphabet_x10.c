#include "main.h"

/**
 * print_alphabet_x10 - Entry point or function
 *
 * Description - function to print 10 times alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
