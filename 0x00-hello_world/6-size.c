#include <stdio.h>

/**
 * Main - Entry point
 *
 * printf - Display result
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int i;
        double d;
        char c;
        float f;
        long long int l;

        printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
        printf("Size of an double is: %lu byte(s)\n", (unsigned long)sizeof(d));
        printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
        printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
        printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));

        return (0);
}
