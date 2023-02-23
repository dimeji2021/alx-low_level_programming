#include main.h
/**
 * print_numbers- print digit from 0 to 9 excluding 2 and 4
 *
 * Return:  Always 0.
 */
void print_numbers(void)
{
	for (int i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			putchar (i);
		}
	}
	putchar ('\n');
	return (0);
}
