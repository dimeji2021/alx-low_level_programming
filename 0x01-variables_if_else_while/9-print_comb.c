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
int j;
for (j = i; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 9 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}

return (0);
}
