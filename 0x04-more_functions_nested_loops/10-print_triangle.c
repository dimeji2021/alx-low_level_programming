#include "main.h"

/**
 * print_square - Prints a square of a given size.
 * @size: The size of the square.
 */

void print_triangle(int size)
{
    if (size <= 0) {
        _putchar('\n');
        return;
    }

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            _putchar('#');
        }
        _putchar('\n');
    }
}
