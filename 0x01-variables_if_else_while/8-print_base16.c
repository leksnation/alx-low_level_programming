#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a = 0;
	int ch = 'a';

	for (; a <= 9; a++)
	{
		putchar(a%10 + '0');
	}
	for (; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
