#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        int digit = i + '0'; // convert the integer to its ASCII character representation
        putchar(digit);
        putchar('\n');
    }

    return 0;
}

