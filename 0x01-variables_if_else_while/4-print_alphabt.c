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
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'a' || letter == 'e')
	continue;
putchar(letter);
}
putchar('\n');
return (0);
}

