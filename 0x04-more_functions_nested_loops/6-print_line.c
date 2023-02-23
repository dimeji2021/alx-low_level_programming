#include main.h
/**
 * print_line- draws a straight line in the terminal.
 *
 *@n: is an integer that represen how long the line will be
 *
 * Return:  Always 0.
 */
void print_line(int n)
{
	while (n > 0)
	{
		putchar ('-');
		n--;
	}
	putchar ('\n');
}
