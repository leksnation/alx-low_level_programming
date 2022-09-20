#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	int i = 0, lenght;

	lenght = _strlen(s) - 1;
	while (lenght > 1)
	{
		swap_char(s + lenght, s + i);
		i++;
		lenght--;
	}
}

/**
 * _strlen - returns the lenght of a string
 *
 * @s: string
 *
 * Return: returns lenght
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}

/**
 * swap_char - swap two characters
 *
 * @a: first character
 * @b: second character
 *
 */
void swap_char(char *a, char *b)
{
	char tmp = *a;

	*a = *b;
	*b = tmp;
}
