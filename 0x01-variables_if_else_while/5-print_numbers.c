#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		printf("%d", a++);
	}
	putchar('\n');

	return (0);
}
