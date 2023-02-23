#include main.h
/**
 * print_numbers- Prints 10 times the numbers, from 0 to 14
 *
 * Return:  Always 0.
 */
void print_numbers(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			putchar(j + '0');
		}
		putchar ('\n');
	}
	putchar ('\n');
	return (0);
}
