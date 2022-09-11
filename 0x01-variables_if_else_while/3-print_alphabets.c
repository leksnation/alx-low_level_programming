#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char ch = 'a';
	char cz = 'A';

	for (; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (; cz <= 'Z'; cz++)
	{
		putchar(cz);
	}
	putchar('\n');

	return (0);
}
