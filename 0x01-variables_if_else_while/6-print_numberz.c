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

	for (; a <= 9; a++)
	{
		putchar(a % 10 + '0');
	}
	putchar('\n');

	return (0);
}
